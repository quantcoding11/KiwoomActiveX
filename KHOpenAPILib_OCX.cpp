// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// $Rev: 98350 $
// File generated on 2024-05-12 오후 3:21:30 from Type Library described below.

// ************************************************************************  //
// Type Lib: C:\OpenAPI\KHOpenAPI.ocx (1)
// LIBID: {6D8C2B4D-EF41-4750-8AD4-C299033833FB}
// LCID: 0
// Helpfile: 
// HelpString: 
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// SYS_KIND: SYS_WIN32
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include <Vcl.OleCtrls.hpp>
#include <Vcl.OleServer.hpp>
#if defined(USING_ATL)
#include <atl\atlvcl.h>
#endif

#pragma option -w-8122
#include "KHOpenAPILib_OCX.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Khopenapilib_tlb
{



// *********************************************************************//
// OCX PROXY CLASS IMPLEMENTATION
// (The following variables/methods implement the class TKHOpenAPI which
// allows "" to be hosted in CBuilder IDE/apps).
// *********************************************************************//
int   TKHOpenAPI::EventDispIDs[9] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006,
    0x00000007, 0x00000008, 0x00000009};

Vcl::Olectrls::TControlData2 TKHOpenAPI::CControlData =
{
  // GUID of CoClass and Event Interface of Control
  {0xA1574A0D, 0x6BFA, 0x4BD7,{ 0x90, 0x20, 0xDE,0xD8, 0x87, 0x11,0x81, 0x8D} }, // CoClass
  {0x7335F12D, 0x8973, 0x4BD5,{ 0xB7, 0xF0, 0x12,0xDF, 0x03, 0xD1,0x75, 0xB7} }, // Events

  // Count of Events and array of their DISPIDs
  9, &EventDispIDs,

  // Pointer to Runtime License string
  NULL,  // HRESULT(0x80004005)

  // Flags for OnChanged PropertyNotification
  0x00000000,
  401,// (IDE Version)

  // Count of Font Prop and array of their DISPIDs
  0, Winapi::Activex::PDispIDList(NULL),

  // Count of Pict Prop and array of their DISPIDs
  0, Winapi::Activex::PDispIDList(NULL),
  0, // Reserved
  0, // Instance count (used internally)
  0, // List of Enum descriptions (internal)
};

GUID     TKHOpenAPI::DEF_CTL_INTF = {0xCF20FBB6, 0xEDD4, 0x4BE5,{ 0xA4, 0x73, 0xFE,0xF9, 0x19, 0x77,0xDE, 0xB6} };
TNoParam TKHOpenAPI::OptParam;

static inline void ValidCtrCheck(TKHOpenAPI *)
{
   delete new TKHOpenAPI((System::Classes::TComponent*)(0));
};

void __fastcall TKHOpenAPI::InitControlData()
{
  ControlData = (Vcl::Olectrls::TControlData*)&CControlData;
  CControlData.FirstEventOfs = System::PByte(&FOnReceiveTrData) - System::PByte(this);
};

void __fastcall TKHOpenAPI::CreateControl()
{
  if (!m_OCXIntf)
  {
    _ASSERTE(DefaultDispatch);
    DefaultDispatch->QueryInterface(DEF_CTL_INTF, (LPVOID*)&m_OCXIntf);
  }
};

_DKHOpenAPIDisp __fastcall TKHOpenAPI::GetDefaultInterface()
{
  CreateControl();
  return m_OCXIntf;
};

long __fastcall TKHOpenAPI::CommConnect(void)
{
  return  GetDefaultInterface()->CommConnect();
}

void __fastcall TKHOpenAPI::CommTerminate(void)
{
  GetDefaultInterface()->CommTerminate();
}

long __fastcall TKHOpenAPI::CommRqData(WideString sRQName, WideString sTrCode, long nPrevNext, WideString sScreenNo)
{
  return  GetDefaultInterface()->CommRqData(sRQName, sTrCode, nPrevNext, sScreenNo);
}

WideString __fastcall TKHOpenAPI::GetLoginInfo(WideString sTag)
{
  return  GetDefaultInterface()->GetLoginInfo(sTag);
}

long __fastcall TKHOpenAPI::SendOrder(WideString sRQName, WideString sScreenNo, WideString sAccNo, long nOrderType,
                                      WideString sCode, long nQty, long nPrice, WideString sHogaGb,
                                      WideString sOrgOrderNo)
{
  return  GetDefaultInterface()->SendOrder(sRQName, sScreenNo, sAccNo, nOrderType, sCode, nQty, 
                                           nPrice, sHogaGb, sOrgOrderNo);
}

long __fastcall TKHOpenAPI::SendOrderFO(WideString sRQName, WideString sScreenNo, WideString sAccNo, WideString sCode,
                                        long lOrdKind, WideString sSlbyTp, WideString sOrdTp, long lQty,
                                        WideString sPrice, WideString sOrgOrdNo)
{
  return  GetDefaultInterface()->SendOrderFO(sRQName, sScreenNo, sAccNo, sCode, lOrdKind, sSlbyTp, 
                                             sOrdTp, lQty, sPrice, sOrgOrdNo);
}

void __fastcall TKHOpenAPI::SetInputValue(WideString sID, WideString sValue)
{
  GetDefaultInterface()->SetInputValue(sID, sValue);
}

long __fastcall TKHOpenAPI::SetOutputFID(WideString sID)
{
  return  GetDefaultInterface()->SetOutputFID(sID);
}

WideString __fastcall TKHOpenAPI::CommGetData(WideString sJongmokCode, WideString sRealType, WideString sFieldName,
                                        long nIndex, WideString sInnerFieldName)
{
  return  GetDefaultInterface()->CommGetData(sJongmokCode, sRealType, sFieldName, nIndex, 
                                             sInnerFieldName);
}

void __fastcall TKHOpenAPI::DisconnectRealData(WideString sScnNo)
{
  GetDefaultInterface()->DisconnectRealData(sScnNo);
}

long __fastcall TKHOpenAPI::GetRepeatCnt(WideString sTrCode, WideString sRecordName)
{
  return  GetDefaultInterface()->GetRepeatCnt(sTrCode, sRecordName);
}

long __fastcall TKHOpenAPI::CommKwRqData(WideString sArrCode, long bNext, int nCodeCount, int nTypeFlag,
                                         WideString sRQName, WideString sScreenNo)
{
  return  GetDefaultInterface()->CommKwRqData(sArrCode, bNext, nCodeCount, nTypeFlag, sRQName, 
                                              sScreenNo);
}

WideString __fastcall TKHOpenAPI::GetAPIModulePath(void)
{
  return  GetDefaultInterface()->GetAPIModulePath();
}

WideString __fastcall TKHOpenAPI::GetCodeListByMarket(WideString sMarket)
{
  return  GetDefaultInterface()->GetCodeListByMarket(sMarket);
}

long __fastcall TKHOpenAPI::GetConnectState(void)
{
  return  GetDefaultInterface()->GetConnectState();
}

WideString __fastcall TKHOpenAPI::GetMasterCodeName(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMasterCodeName(sTrCode);
}

long __fastcall TKHOpenAPI::GetMasterListedStockCnt(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMasterListedStockCnt(sTrCode);
}

WideString __fastcall TKHOpenAPI::GetMasterConstruction(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMasterConstruction(sTrCode);
}

WideString __fastcall TKHOpenAPI::GetMasterListedStockDate(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMasterListedStockDate(sTrCode);
}

WideString __fastcall TKHOpenAPI::GetMasterLastPrice(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMasterLastPrice(sTrCode);
}

WideString __fastcall TKHOpenAPI::GetMasterStockState(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMasterStockState(sTrCode);
}

long __fastcall TKHOpenAPI::GetDataCount(WideString strRecordName)
{
  return  GetDefaultInterface()->GetDataCount(strRecordName);
}

WideString __fastcall TKHOpenAPI::GetOutputValue(WideString strRecordName, long nRepeatIdx, long nItemIdx)
{
  return  GetDefaultInterface()->GetOutputValue(strRecordName, nRepeatIdx, nItemIdx);
}

WideString __fastcall TKHOpenAPI::GetCommData(WideString strTrCode, WideString strRecordName, long nIndex,
                                        WideString strItemName)
{
  return  GetDefaultInterface()->GetCommData(strTrCode, strRecordName, nIndex, strItemName);
}

WideString __fastcall TKHOpenAPI::GetCommRealData(WideString sTrCode, long nFid)
{
  return  GetDefaultInterface()->GetCommRealData(sTrCode, nFid);
}

WideString __fastcall TKHOpenAPI::GetChejanData(long nFid)
{
  return  GetDefaultInterface()->GetChejanData(nFid);
}

WideString __fastcall TKHOpenAPI::GetThemeGroupList(long nType)
{
  return  GetDefaultInterface()->GetThemeGroupList(nType);
}

WideString __fastcall TKHOpenAPI::GetThemeGroupCode(WideString strThemeCode)
{
  return  GetDefaultInterface()->GetThemeGroupCode(strThemeCode);
}

WideString __fastcall TKHOpenAPI::GetFutureList(void)
{
  return  GetDefaultInterface()->GetFutureList();
}

WideString __fastcall TKHOpenAPI::GetFutureCodeByIndex(int nIndex)
{
  return  GetDefaultInterface()->GetFutureCodeByIndex(nIndex);
}

WideString __fastcall TKHOpenAPI::GetActPriceList(void)
{
  return  GetDefaultInterface()->GetActPriceList();
}

WideString __fastcall TKHOpenAPI::GetMonthList(void)
{
  return  GetDefaultInterface()->GetMonthList();
}

WideString __fastcall TKHOpenAPI::GetOptionCode(WideString strActPrice, int nCp, WideString strMonth)
{
  return  GetDefaultInterface()->GetOptionCode(strActPrice, nCp, strMonth);
}

WideString __fastcall TKHOpenAPI::GetOptionCodeByMonth(WideString sTrCode, int nCp, WideString strMonth)
{
  return  GetDefaultInterface()->GetOptionCodeByMonth(sTrCode, nCp, strMonth);
}

WideString __fastcall TKHOpenAPI::GetOptionCodeByActPrice(WideString sTrCode, int nCp, int nTick)
{
  return  GetDefaultInterface()->GetOptionCodeByActPrice(sTrCode, nCp, nTick);
}

WideString __fastcall TKHOpenAPI::GetSFutureList(WideString strBaseAssetCode)
{
  return  GetDefaultInterface()->GetSFutureList(strBaseAssetCode);
}

WideString __fastcall TKHOpenAPI::GetSFutureCodeByIndex(WideString strBaseAssetCode, int nIndex)
{
  return  GetDefaultInterface()->GetSFutureCodeByIndex(strBaseAssetCode, nIndex);
}

WideString __fastcall TKHOpenAPI::GetSActPriceList(WideString strBaseAssetGb)
{
  return  GetDefaultInterface()->GetSActPriceList(strBaseAssetGb);
}

WideString __fastcall TKHOpenAPI::GetSMonthList(WideString strBaseAssetGb)
{
  return  GetDefaultInterface()->GetSMonthList(strBaseAssetGb);
}

WideString __fastcall TKHOpenAPI::GetSOptionCode(WideString strBaseAssetGb, WideString strActPrice, int nCp,
                                           WideString strMonth)
{
  return  GetDefaultInterface()->GetSOptionCode(strBaseAssetGb, strActPrice, nCp, strMonth);
}

WideString __fastcall TKHOpenAPI::GetSOptionCodeByMonth(WideString strBaseAssetGb, WideString sTrCode, int nCp,
                                                  WideString strMonth)
{
  return  GetDefaultInterface()->GetSOptionCodeByMonth(strBaseAssetGb, sTrCode, nCp, strMonth);
}

WideString __fastcall TKHOpenAPI::GetSOptionCodeByActPrice(WideString strBaseAssetGb, WideString sTrCode, int nCp,
                                                     int nTick)
{
  return  GetDefaultInterface()->GetSOptionCodeByActPrice(strBaseAssetGb, sTrCode, nCp, nTick);
}

WideString __fastcall TKHOpenAPI::GetSFOBasisAssetList(void)
{
  return  GetDefaultInterface()->GetSFOBasisAssetList();
}

WideString __fastcall TKHOpenAPI::GetOptionATM(void)
{
  return  GetDefaultInterface()->GetOptionATM();
}

WideString __fastcall TKHOpenAPI::GetSOptionATM(WideString strBaseAssetGb)
{
  return  GetDefaultInterface()->GetSOptionATM(strBaseAssetGb);
}

WideString __fastcall TKHOpenAPI::GetBranchCodeName(void)
{
  return  GetDefaultInterface()->GetBranchCodeName();
}

long __fastcall TKHOpenAPI::CommInvestRqData(WideString sMarketGb, WideString sRQName, WideString sScreenNo)
{
  return  GetDefaultInterface()->CommInvestRqData(sMarketGb, sRQName, sScreenNo);
}

long __fastcall TKHOpenAPI::SendOrderCredit(WideString sRQName, WideString sScreenNo, WideString sAccNo,
                                            long nOrderType, WideString sCode, long nQty, long nPrice,
                                            WideString sHogaGb, WideString sCreditGb, WideString sLoanDate,
                                            WideString sOrgOrderNo)
{
  return  GetDefaultInterface()->SendOrderCredit(sRQName, sScreenNo, sAccNo, nOrderType, sCode, nQty, 
                                                 nPrice, sHogaGb, sCreditGb, sLoanDate, sOrgOrderNo);
}

WideString __fastcall TKHOpenAPI::KOA_Functions(WideString sFunctionName, WideString sParam)
{
  return  GetDefaultInterface()->KOA_Functions(sFunctionName, sParam);
}

long __fastcall TKHOpenAPI::SetInfoData(WideString sInfoData)
{
  return  GetDefaultInterface()->SetInfoData(sInfoData);
}

long __fastcall TKHOpenAPI::SetRealReg(WideString strScreenNo, WideString strCodeList, WideString strFidList,
                                       WideString strOptType)
{
  return  GetDefaultInterface()->SetRealReg(strScreenNo, strCodeList, strFidList, strOptType);
}

long __fastcall TKHOpenAPI::GetConditionLoad(void)
{
  return  GetDefaultInterface()->GetConditionLoad();
}

WideString __fastcall TKHOpenAPI::GetConditionNameList(void)
{
  return  GetDefaultInterface()->GetConditionNameList();
}

long __fastcall TKHOpenAPI::SendCondition(WideString strScrNo, WideString strConditionName, int nIndex,
                                          int nSearch)
{
  return  GetDefaultInterface()->SendCondition(strScrNo, strConditionName, nIndex, nSearch);
}

void __fastcall TKHOpenAPI::SendConditionStop(WideString strScrNo, WideString strConditionName, int nIndex)
{
  GetDefaultInterface()->SendConditionStop(strScrNo, strConditionName, nIndex);
}

VARIANT __fastcall TKHOpenAPI::GetCommDataEx(WideString strTrCode, WideString strRecordName)
{
  return  GetDefaultInterface()->GetCommDataEx(strTrCode, strRecordName);
}

void __fastcall TKHOpenAPI::SetRealRemove(WideString strScrNo, WideString strDelCode)
{
  GetDefaultInterface()->SetRealRemove(strScrNo, strDelCode);
}

long __fastcall TKHOpenAPI::GetMarketType(WideString sTrCode)
{
  return  GetDefaultInterface()->GetMarketType(sTrCode);
}


};     // namespace Khopenapilib_tlb


// *********************************************************************//
// The Register function is invoked by the IDE when this module is 
// installed in a Package. It provides the list of Components (including
// OCXes) implemented by this module. The following implementation
// informs the IDE of the OCX proxy classes implemented here.
// *********************************************************************//
namespace Khopenapilib_ocx
{

void __fastcall PACKAGE Register()
{
  // [1]
  System::Classes::TComponentClass cls_ocx[] = {
                              __classid(Khopenapilib_tlb::TKHOpenAPI)
                           };
  System::Classes::RegisterComponents("ActiveX", cls_ocx,
                     sizeof(cls_ocx)/sizeof(cls_ocx[0])-1);
}

};     // namespace Khopenapilib_ocx
