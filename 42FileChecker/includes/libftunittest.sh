#!/bin/bash

if [ "$FILECHECKER_SH" == "1" ]
then

function check_libftunittest
{	if [ "${OPT_NO_LIBFTUNITTEST}" == "0" ]; then
	local RET0 RET1 TOTAL
	local RUNNING_MODE=$1
	local LOGFILENAME=".mylibftunittest"
	${CMD_RM} -f ${LOGFILENAME}
	if [ -d "${LIBFTUNITTEST_DIR}" ]
	then
		MYPATH=$(get_config "libft")
		if [ "${OPT_NO_MAKEFILE}" == "0" -o "${RUNNING_MODE}" == "RUN_ALONE" ]
		then
			make re -C "${MYPATH}" 2>&1 1>/dev/null
		fi
		make re f -C "${LIBFTUNITTEST_DIR}" LIBFTDIR="${MYPATH}" 2>&1 >${LOGFILENAME}
		check_cleanlog ${LOGFILENAME}
		RET0=`cat ${LOGFILENAME}`
		RET1=`echo "${RET0}" | grep 'RUNING TESTS:'`
		if [ "${RET1}" == "" ]
		then
			printf ${C_RED}"  Fatal error: libft-unit-test cannot compile (see more info)"${C_CLEAR}
		else
			RET1=`echo "${RET0}" | grep 'See result.log for more informations'`
			if [ "${RET1}" == "" ]
			then
				printf ${C_RED}"  Fatal error: libft-unit-test has aborted (see more info)"${C_CLEAR}
			else
				RET1=`echo "${RET0}" | grep -o -E "\[FAILED\]|\[CRASH\]|\[NO CRASH\]"`
				echo "42FILECHECKER INFO:\n\nHere is the full standard output of the libft-unit-test running with your libft.\nSee also the clean logfile provided by the library at the following path:\n${RETURNPATH}/${LIBFTUNITTEST_DIR}/result.log\n\n\n\n------------------------------------------------\n\n\n\n${RET0}" >${LOGFILENAME}
				if [ "${RET1}" != "" ]
				then
					TOTAL=`printf "%s\n" "${RET1}" | wc -l | sed 's/ //g'`
					printf ${C_RED}"  ${TOTAL} failed test(s)"${C_CLEAR}
				else
					printf ${C_GREEN}"  All Unit Tests passed"${C_CLEAR}
				fi
			fi
		fi
	else
		printf ${C_RED}"  'libft-unit-test' is not installed"${C_CLEAR}
	fi
	else printf ${C_GREY}"  --Not performed--"${C_CLEAR}; fi
}

fi