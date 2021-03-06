/*********************************************************************
 * File Name: http_net_print.c
 *
 * Provides callback headers and resolution for user's custom
 * HTTP NET Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 *
*********************************************************************/

/*****************************************************************************
 Copyright (C) 2012-2018 Microchip Technology Inc. and its subsidiaries.

Microchip Technology Inc. and its subsidiaries.

Subject to your compliance with these terms, you may use Microchip software 
and any derivatives exclusively with Microchip products. It is your 
responsibility to comply with third party license terms applicable to your 
use of third party software (including open source software) that may 
accompany Microchip software.

THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A PARTICULAR 
PURPOSE.

IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE 
FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN 
ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, 
THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*****************************************************************************/


#include "configuration.h"
#include "tcpip/tcpip.h"

/****************************************************************************
Section:
    Dynamic Variables Function Prototypes

Remarks:
    There are no predefined functions that do the dynamic variables processing.
    The only interface between the application and the HTTP module is done using
    TCPIP_HTTP_NET_UserHandlerRegister() call.
    Therefore, whenever the HTTP module will encounter a dynamic variable it will
    simply call the "dynamicPrint" function that was registrated!
    It is up to the application to detect what dynamic variable is processed by
    examining the TCPIP_HTTP_DYN_VAR_DCPT *parameter that's passed to the function
    and take appropriate action.

    The mpfs2 generator does not generate a list of dynamic variables functions anymore.
    All the dynamic variable processing happens at run time!
    Web pages could be changed at run time and the web server will work just fine
    (providing that the application properly processes the dynamic variables).

    These are just functions  belonging to the application.
    They can have any name the application uses to.
 ****************************************************************************/
 
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_hellomsg(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_builddate(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_version(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_drive(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_fstype(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_cookiename(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_cookiefav(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_btn(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_led(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ledSelected(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_pot(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_status_ok(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_status_fail(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_uploadedmd5(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_hostname(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_dhcpchecked(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_ip(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_gw(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_subnet(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_dns1(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_dns2(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_config_mac(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_user(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_pass(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_host(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_service(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_status(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_ddns_status_msg(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_reboot(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_rebootaddr(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_snmp_en(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_read_comm(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_Print_write_comm(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);

/****************************************************************************
  Section:
    Application Dynamic Variables processing functions.
    For easy processing and facilitating of the transfer from the old style of 
    processing the dynamic variables with pre-defined functions,
    the new dynamic variables functions maintain the old name and
    a table showing the correspondence between the dynamic variable name
    and the function that processes that variable i smaintained in this
    coming HTTP_APP_DynVarTbl[].
    Note that this is just an example.
    The application could opt for any type of proccessing it needs to do at run time.

    See http_net.h for details regarding each of these functions.
 ****************************************************************************/

// application HTTP dynamic variables processing function
typedef TCPIP_HTTP_DYN_PRINT_RES (*HTTP_APP_DYNVAR_FNC)(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt);

// an entry for the application processing HTTP dynamic variables
typedef struct
{
    const char *varName;        // name of the dynamic variable
    HTTP_APP_DYNVAR_FNC varFnc; // processing function     
}HTTP_APP_DYNVAR_ENTRY;

// table with the processed dynamic variables in this demo
static HTTP_APP_DYNVAR_ENTRY HTTP_APP_DynVarTbl[] = 
{
    // varName                      varFnc
    {"hellomsg",                    TCPIP_HTTP_Print_hellomsg},
    {"builddate",                   TCPIP_HTTP_Print_builddate},
    {"version",                     TCPIP_HTTP_Print_version},
    {"drive",                       TCPIP_HTTP_Print_drive},
    {"fstype",                      TCPIP_HTTP_Print_fstype},
    {"cookiename",                  TCPIP_HTTP_Print_cookiename},
    {"cookiefav",                   TCPIP_HTTP_Print_cookiefav},
    {"btn",                         TCPIP_HTTP_Print_btn},
    {"led",                         TCPIP_HTTP_Print_led},
    {"ledSelected",                 TCPIP_HTTP_Print_ledSelected},
    {"pot",                         TCPIP_HTTP_Print_pot},
    {"status_ok",                   TCPIP_HTTP_Print_status_ok},
    {"status_fail",                 TCPIP_HTTP_Print_status_fail},
    {"uploadedmd5",                 TCPIP_HTTP_Print_uploadedmd5},
    {"config_hostname",             TCPIP_HTTP_Print_config_hostname},
    {"config_dhcpchecked",          TCPIP_HTTP_Print_config_dhcpchecked},
    {"config_ip",                   TCPIP_HTTP_Print_config_ip},
    {"config_gw",                   TCPIP_HTTP_Print_config_gw},
    {"config_subnet",               TCPIP_HTTP_Print_config_subnet},
    {"config_dns1",                 TCPIP_HTTP_Print_config_dns1},
    {"config_dns2",                 TCPIP_HTTP_Print_config_dns2},
    {"config_mac",                  TCPIP_HTTP_Print_config_mac},
    {"ddns_user",                   TCPIP_HTTP_Print_ddns_user},
    {"ddns_pass",                   TCPIP_HTTP_Print_ddns_pass},
    {"ddns_host",                   TCPIP_HTTP_Print_ddns_host},
    {"ddns_service",                TCPIP_HTTP_Print_ddns_service},
    {"ddns_status",                 TCPIP_HTTP_Print_ddns_status},
    {"ddns_status_msg",             TCPIP_HTTP_Print_ddns_status_msg},
    {"reboot",                      TCPIP_HTTP_Print_reboot},
    {"rebootaddr",                  TCPIP_HTTP_Print_rebootaddr},
    {"snmp_en",                     TCPIP_HTTP_Print_snmp_en},
    {"read_comm",                   TCPIP_HTTP_Print_read_comm},
    {"write_comm",                  TCPIP_HTTP_Print_write_comm},
};

// Function that processes the dynamic variables
// It uses the HTTP_APP_DynVarTbl[] for detecting which variable is currently processed
// and what function should be launched.
//
// Note: Again, this is just an example.
// Processing a large number of dynamic variables using this approach is highly inneficient
// and should be avoided.
// Better methods should be emplyed rather than linearly polling each variable name until the required name was found.
//
TCPIP_HTTP_DYN_PRINT_RES TCPIP_HTTP_NET_DynPrint(TCPIP_HTTP_NET_CONN_HANDLE connHandle, const TCPIP_HTTP_DYN_VAR_DCPT *vDcpt, const TCPIP_HTTP_NET_USER_CALLBACK *pCBack)
{
    int ix;
    HTTP_APP_DYNVAR_ENTRY *pEntry;

    // search for a dynamic variable name
    pEntry = HTTP_APP_DynVarTbl;
    for(ix = 0; ix < sizeof(HTTP_APP_DynVarTbl)/sizeof(*HTTP_APP_DynVarTbl); ++ix, ++pEntry)
    {
        if(strcmp(vDcpt->dynName, pEntry->varName) == 0)
        {   // found it
            return (*pEntry->varFnc)(connHandle, vDcpt);
        }
    }

    // not found; do nothing
    return TCPIP_HTTP_DYN_PRINT_RES_DONE;
}
