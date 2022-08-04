#pragma once
/******************************************************************************/
/* File   : infServiceSwcEcuM_ServiceEcuM.hpp                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceSwcEcuM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infServiceSwcEcuM_ServiceEcuM{
   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      virtual FUNC(void, SWCSERVICEECUM_CODE) StartPreServiceOs  (void) = 0;
      virtual FUNC(void, SWCSERVICEECUM_CODE) StartPostServiceOs (void) = 0;
      virtual FUNC(void, SWCSERVICEECUM_CODE) OffPreServiceOs    (void) = 0;
      virtual FUNC(void, SWCSERVICEECUM_CODE) OffPostServiceOs   (void) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
