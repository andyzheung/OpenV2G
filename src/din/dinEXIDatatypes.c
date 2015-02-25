/*
 * Copyright (C) 2007-2015 Siemens AG
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*******************************************************************
 *
 * @author Daniel.Peintner.EXT@siemens.com
 * @version 0.9.3 
 * @contact Joerg.Heuer@siemens.com
 *
 * <p>Code generated by EXIdizer</p>
 * <p>Schema: V2G_CI_MsgDef.xsd</p>
 *
 *
 ********************************************************************/



#include <stdint.h>

#include "dinEXIDatatypes.h"
#include "EXITypes.h"


#ifndef EXI_din_DATATYPES_C
#define EXI_din_DATATYPES_C

#if DEPLOY_DIN_CODEC == SUPPORT_YES


void init_dinEXIDocument(struct dinEXIDocument* exiDoc) {
	exiDoc->BodyElement_isUsed = 0u;
	exiDoc->V2G_Message_isUsed = 0u;
	exiDoc->SignatureProperty_isUsed = 0u;
	exiDoc->DSAKeyValue_isUsed = 0u;
	exiDoc->SignatureProperties_isUsed = 0u;
	exiDoc->KeyValue_isUsed = 0u;
	exiDoc->Transforms_isUsed = 0u;
	exiDoc->DigestMethod_isUsed = 0u;
	exiDoc->Signature_isUsed = 0u;
	exiDoc->RetrievalMethod_isUsed = 0u;
	exiDoc->Manifest_isUsed = 0u;
	exiDoc->Reference_isUsed = 0u;
	exiDoc->CanonicalizationMethod_isUsed = 0u;
	exiDoc->RSAKeyValue_isUsed = 0u;
	exiDoc->Transform_isUsed = 0u;
	exiDoc->PGPData_isUsed = 0u;
	exiDoc->MgmtData_isUsed = 0u;
	exiDoc->SignatureMethod_isUsed = 0u;
	exiDoc->KeyInfo_isUsed = 0u;
	exiDoc->SPKIData_isUsed = 0u;
	exiDoc->X509Data_isUsed = 0u;
	exiDoc->SignatureValue_isUsed = 0u;
	exiDoc->KeyName_isUsed = 0u;
	exiDoc->DigestValue_isUsed = 0u;
	exiDoc->SignedInfo_isUsed = 0u;
	exiDoc->Object_isUsed = 0u;
	exiDoc->DC_EVSEStatus_isUsed = 0u;
	exiDoc->RelativeTimeInterval_isUsed = 0u;
	exiDoc->SalesTariffEntry_isUsed = 0u;
	exiDoc->DC_EVPowerDeliveryParameter_isUsed = 0u;
	exiDoc->SASchedules_isUsed = 0u;
	exiDoc->AC_EVChargeParameter_isUsed = 0u;
	exiDoc->SAScheduleList_isUsed = 0u;
	exiDoc->DC_EVStatus_isUsed = 0u;
	exiDoc->ServiceCharge_isUsed = 0u;
	exiDoc->EVStatus_isUsed = 0u;
	exiDoc->DC_EVChargeParameter_isUsed = 0u;
	exiDoc->DC_EVSEChargeParameter_isUsed = 0u;
	exiDoc->EVSEStatus_isUsed = 0u;
	exiDoc->TimeInterval_isUsed = 0u;
	exiDoc->EVPowerDeliveryParameter_isUsed = 0u;
	exiDoc->EVSEChargeParameter_isUsed = 0u;
	exiDoc->AC_EVSEStatus_isUsed = 0u;
	exiDoc->Entry_isUsed = 0u;
	exiDoc->AC_EVSEChargeParameter_isUsed = 0u;
	exiDoc->PMaxScheduleEntry_isUsed = 0u;
	exiDoc->EVChargeParameter_isUsed = 0u;
	exiDoc->ServiceDiscoveryReq_isUsed = 0u;
	exiDoc->ServiceDiscoveryRes_isUsed = 0u;
	exiDoc->MeteringReceiptReq_isUsed = 0u;
	exiDoc->PaymentDetailsReq_isUsed = 0u;
	exiDoc->MeteringReceiptRes_isUsed = 0u;
	exiDoc->PaymentDetailsRes_isUsed = 0u;
	exiDoc->SessionSetupReq_isUsed = 0u;
	exiDoc->SessionSetupRes_isUsed = 0u;
	exiDoc->CableCheckReq_isUsed = 0u;
	exiDoc->CableCheckRes_isUsed = 0u;
	exiDoc->ContractAuthenticationReq_isUsed = 0u;
	exiDoc->CertificateInstallationReq_isUsed = 0u;
	exiDoc->ContractAuthenticationRes_isUsed = 0u;
	exiDoc->CertificateInstallationRes_isUsed = 0u;
	exiDoc->WeldingDetectionReq_isUsed = 0u;
	exiDoc->WeldingDetectionRes_isUsed = 0u;
	exiDoc->CertificateUpdateReq_isUsed = 0u;
	exiDoc->CertificateUpdateRes_isUsed = 0u;
	exiDoc->PowerDeliveryReq_isUsed = 0u;
	exiDoc->PowerDeliveryRes_isUsed = 0u;
	exiDoc->ChargingStatusReq_isUsed = 0u;
	exiDoc->ChargingStatusRes_isUsed = 0u;
	exiDoc->CurrentDemandReq_isUsed = 0u;
	exiDoc->PreChargeReq_isUsed = 0u;
	exiDoc->CurrentDemandRes_isUsed = 0u;
	exiDoc->PreChargeRes_isUsed = 0u;
	exiDoc->ServicePaymentSelectionReq_isUsed = 0u;
	exiDoc->SessionStopReq_isUsed = 0u;
	exiDoc->ServicePaymentSelectionRes_isUsed = 0u;
	exiDoc->SessionStopRes_isUsed = 0u;
	exiDoc->ChargeParameterDiscoveryReq_isUsed = 0u;
	exiDoc->ChargeParameterDiscoveryRes_isUsed = 0u;
	exiDoc->ServiceDetailReq_isUsed = 0u;
	exiDoc->ServiceDetailRes_isUsed = 0u;
}

#if DEPLOY_DIN_CODEC_FRAGMENT == SUPPORT_YES
void init_dinEXIFragment(struct dinEXIFragment* exiFrag) {
	exiFrag->RSAKeyValue_isUsed = 0u;
	exiFrag->ParameterSet_isUsed = 0u;
	exiFrag->EVEnergyRequest_isUsed = 0u;
	exiFrag->amount_isUsed = 0u;
	exiFrag->start_isUsed = 0u;
	exiFrag->Notification_isUsed = 0u;
	exiFrag->ServiceScope_isUsed = 0u;
	exiFrag->EVMaximumVoltageLimit_isUsed = 0u;
	exiFrag->Certificate_isUsed = 0u;
	exiFrag->Certificate_isUsed = 0u;
	exiFrag->EVCabinConditioning_isUsed = 0u;
	exiFrag->EVSECurrentLimitAchieved_isUsed = 0u;
	exiFrag->EVMaxCurrent_isUsed = 0u;
	exiFrag->CertificateInstallationRes_isUsed = 0u;
	exiFrag->EVMaxVoltage_isUsed = 0u;
	exiFrag->Exponent_isUsed = 0u;
	exiFrag->SubCertificates_isUsed = 0u;
	exiFrag->FaultCode_isUsed = 0u;
	exiFrag->EVRequestedEnergyTransferType_isUsed = 0u;
	exiFrag->EVMinCurrent_isUsed = 0u;
	exiFrag->boolValue_isUsed = 0u;
	exiFrag->J_isUsed = 0u;
	exiFrag->EVSEStatus_isUsed = 0u;
	exiFrag->ServicePaymentSelectionReq_isUsed = 0u;
	exiFrag->Transforms_isUsed = 0u;
	exiFrag->X509CRL_isUsed = 0u;
	exiFrag->Manifest_isUsed = 0u;
	exiFrag->EVSEMinimumVoltageLimit_isUsed = 0u;
	exiFrag->EVSECurrentRegulationTolerance_isUsed = 0u;
	exiFrag->EVMaximumPowerLimit_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->V2G_Message_isUsed = 0u;
	exiFrag->Parameter_isUsed = 0u;
	exiFrag->EVTargetCurrent_isUsed = 0u;
	exiFrag->EVTargetCurrent_isUsed = 0u;
	exiFrag->DigestMethod_isUsed = 0u;
	exiFrag->byteValue_isUsed = 0u;
	exiFrag->PaymentOptions_isUsed = 0u;
	exiFrag->EVMaximumVoltageLimit_isUsed = 0u;
	exiFrag->ChargingComplete_isUsed = 0u;
	exiFrag->Multiplier_isUsed = 0u;
	exiFrag->EVSEIsolationStatus_isUsed = 0u;
	exiFrag->EVSEPeakCurrentRipple_isUsed = 0u;
	exiFrag->ReadyToChargeState_isUsed = 0u;
	exiFrag->X509IssuerSerial_isUsed = 0u;
	exiFrag->duration_isUsed = 0u;
	exiFrag->NotificationMaxDelay_isUsed = 0u;
	exiFrag->NotificationMaxDelay_isUsed = 0u;
	exiFrag->ServiceDetailRes_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->EVSEProcessing_isUsed = 0u;
	exiFrag->PGPKeyPacket_isUsed = 0u;
	exiFrag->PGPKeyPacket_isUsed = 0u;
	exiFrag->ServiceDetailReq_isUsed = 0u;
	exiFrag->DC_EVPowerDeliveryParameter_isUsed = 0u;
	exiFrag->PgenCounter_isUsed = 0u;
	exiFrag->EVChargeParameter_isUsed = 0u;
	exiFrag->RelativeTimeInterval_isUsed = 0u;
	exiFrag->SelectedServiceList_isUsed = 0u;
	exiFrag->X509SerialNumber_isUsed = 0u;
	exiFrag->SalesTariffEntry_isUsed = 0u;
	exiFrag->SAScheduleTuple_isUsed = 0u;
	exiFrag->Reference_isUsed = 0u;
	exiFrag->SignedInfo_isUsed = 0u;
	exiFrag->CableCheckReq_isUsed = 0u;
	exiFrag->PowerDeliveryReq_isUsed = 0u;
	exiFrag->EVPowerDeliveryParameter_isUsed = 0u;
	exiFrag->MeteringReceiptReq_isUsed = 0u;
	exiFrag->DC_EVChargeParameter_isUsed = 0u;
	exiFrag->KeyValue_isUsed = 0u;
	exiFrag->Y_isUsed = 0u;
	exiFrag->ChargingProfileEntryMaxPower_isUsed = 0u;
	exiFrag->EVRESSConditioning_isUsed = 0u;
	exiFrag->EVSEMaximumVoltageLimit_isUsed = 0u;
	exiFrag->EPriceLevel_isUsed = 0u;
	exiFrag->ServiceList_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->PMaxSchedule_isUsed = 0u;
	exiFrag->EVSEPowerLimitAchieved_isUsed = 0u;
	exiFrag->CertificateUpdateRes_isUsed = 0u;
	exiFrag->EVSEEnergyToBeDelivered_isUsed = 0u;
	exiFrag->AC_EVSEStatus_isUsed = 0u;
	exiFrag->AC_EVSEStatus_isUsed = 0u;
	exiFrag->ServiceTag_isUsed = 0u;
	exiFrag->SignatureMethod_isUsed = 0u;
	exiFrag->TimeInterval_isUsed = 0u;
	exiFrag->amountMultiplier_isUsed = 0u;
	exiFrag->X509Data_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->ContractSignatureCertChain_isUsed = 0u;
	exiFrag->Seed_isUsed = 0u;
	exiFrag->Modulus_isUsed = 0u;
	exiFrag->ServiceCategory_isUsed = 0u;
	exiFrag->MeterStatus_isUsed = 0u;
	exiFrag->EVMaximumCurrentLimit_isUsed = 0u;
	exiFrag->KeyInfo_isUsed = 0u;
	exiFrag->CertificateInstallationReq_isUsed = 0u;
	exiFrag->ChargingProfile_isUsed = 0u;
	exiFrag->BulkSOC_isUsed = 0u;
	exiFrag->X509IssuerName_isUsed = 0u;
	exiFrag->EVRESSSOC_isUsed = 0u;
	exiFrag->X509SubjectName_isUsed = 0u;
	exiFrag->AC_EVSEChargeParameter_isUsed = 0u;
	exiFrag->MgmtData_isUsed = 0u;
	exiFrag->Value_isUsed = 0u;
	exiFrag->ChargingStatusRes_isUsed = 0u;
	exiFrag->ServiceName_isUsed = 0u;
	exiFrag->FreeService_isUsed = 0u;
	exiFrag->physicalValue_isUsed = 0u;
	exiFrag->EVSEMaxVoltage_isUsed = 0u;
	exiFrag->intValue_isUsed = 0u;
	exiFrag->PGPKeyID_isUsed = 0u;
	exiFrag->ChargeParameterDiscoveryRes_isUsed = 0u;
	exiFrag->ServiceCategory_isUsed = 0u;
	exiFrag->MeteringReceiptRes_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVSEID_isUsed = 0u;
	exiFrag->EVMaximumCurrentLimit_isUsed = 0u;
	exiFrag->costKind_isUsed = 0u;
	exiFrag->X509SKI_isUsed = 0u;
	exiFrag->MeterID_isUsed = 0u;
	exiFrag->OEMProvisioningCert_isUsed = 0u;
	exiFrag->Entry_isUsed = 0u;
	exiFrag->SignatureProperties_isUsed = 0u;
	exiFrag->P_isUsed = 0u;
	exiFrag->PreChargeReq_isUsed = 0u;
	exiFrag->SignatureValue_isUsed = 0u;
	exiFrag->EVSENotification_isUsed = 0u;
	exiFrag->EVSENotification_isUsed = 0u;
	exiFrag->BulkChargingComplete_isUsed = 0u;
	exiFrag->EVMaximumPowerLimit_isUsed = 0u;
	exiFrag->RCD_isUsed = 0u;
	exiFrag->ServiceParameterList_isUsed = 0u;
	exiFrag->SelectedService_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->ResponseCode_isUsed = 0u;
	exiFrag->SessionStopRes_isUsed = 0u;
	exiFrag->PGPData_isUsed = 0u;
	exiFrag->EVEnergyCapacity_isUsed = 0u;
	exiFrag->startValue_isUsed = 0u;
	exiFrag->ServicePaymentSelectionRes_isUsed = 0u;
	exiFrag->EnergyTransferType_isUsed = 0u;
	exiFrag->ChargingComplete_isUsed = 0u;
	exiFrag->ListOfRootCertificateIDs_isUsed = 0u;
	exiFrag->ListOfRootCertificateIDs_isUsed = 0u;
	exiFrag->NumEPriceLevels_isUsed = 0u;
	exiFrag->EVSEStatusCode_isUsed = 0u;
	exiFrag->SASchedules_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->DC_EVSEChargeParameter_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->MeterInfo_isUsed = 0u;
	exiFrag->X509Certificate_isUsed = 0u;
	exiFrag->shortValue_isUsed = 0u;
	exiFrag->SPKISexp_isUsed = 0u;
	exiFrag->SalesTariffID_isUsed = 0u;
	exiFrag->CanonicalizationMethod_isUsed = 0u;
	exiFrag->TMeter_isUsed = 0u;
	exiFrag->PaymentDetailsRes_isUsed = 0u;
	exiFrag->EVCCID_isUsed = 0u;
	exiFrag->EVSEMaximumPowerLimit_isUsed = 0u;
	exiFrag->EVSEChargeParameter_isUsed = 0u;
	exiFrag->Body_isUsed = 0u;
	exiFrag->DateTimeNow_isUsed = 0u;
	exiFrag->DateTimeNow_isUsed = 0u;
	exiFrag->EVSEMaximumPowerLimit_isUsed = 0u;
	exiFrag->SPKIData_isUsed = 0u;
	exiFrag->Object_isUsed = 0u;
	exiFrag->ServiceCharge_isUsed = 0u;
	exiFrag->SessionID_isUsed = 0u;
	exiFrag->FullSOC_isUsed = 0u;
	exiFrag->SAScheduleList_isUsed = 0u;
	exiFrag->EVSEMaximumCurrentLimit_isUsed = 0u;
	exiFrag->DSAKeyValue_isUsed = 0u;
	exiFrag->ChargeParameterDiscoveryReq_isUsed = 0u;
	exiFrag->EVStatus_isUsed = 0u;
	exiFrag->stringValue_isUsed = 0u;
	exiFrag->PowerDeliveryRes_isUsed = 0u;
	exiFrag->ContractSignatureEncryptedPrivateKey_isUsed = 0u;
	exiFrag->CertificateUpdateReq_isUsed = 0u;
	exiFrag->ContractSignatureEncryptedPrivateKey_isUsed = 0u;
	exiFrag->Signature_isUsed = 0u;
	exiFrag->ContractAuthenticationRes_isUsed = 0u;
	exiFrag->Transform_isUsed = 0u;
	exiFrag->PaymentOption_isUsed = 0u;
	exiFrag->G_isUsed = 0u;
	exiFrag->ReceiptRequired_isUsed = 0u;
	exiFrag->EVSEMaximumCurrentLimit_isUsed = 0u;
	exiFrag->Unit_isUsed = 0u;
	exiFrag->ConsumptionCost_isUsed = 0u;
	exiFrag->EVSEMaxCurrent_isUsed = 0u;
	exiFrag->SalesTariffDescription_isUsed = 0u;
	exiFrag->ContractID_isUsed = 0u;
	exiFrag->AC_EVChargeParameter_isUsed = 0u;
	exiFrag->ContractID_isUsed = 0u;
	exiFrag->ContractID_isUsed = 0u;
	exiFrag->ContractID_isUsed = 0u;
	exiFrag->RemainingTimeToBulkSoC_isUsed = 0u;
	exiFrag->DC_EVSEStatus_isUsed = 0u;
	exiFrag->DC_EVSEStatus_isUsed = 0u;
	exiFrag->CableCheckRes_isUsed = 0u;
	exiFrag->SessionID_isUsed = 0u;
	exiFrag->RemainingTimeToFullSoC_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->EVSEPresentVoltage_isUsed = 0u;
	exiFrag->SessionSetupReq_isUsed = 0u;
	exiFrag->PreChargeRes_isUsed = 0u;
	exiFrag->KeyName_isUsed = 0u;
	exiFrag->EVReady_isUsed = 0u;
	exiFrag->CurrentDemandRes_isUsed = 0u;
	exiFrag->PMaxScheduleEntry_isUsed = 0u;
	exiFrag->ServiceDiscoveryRes_isUsed = 0u;
	exiFrag->PaymentDetailsReq_isUsed = 0u;
	exiFrag->SelectedPaymentOption_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->DigestValue_isUsed = 0u;
	exiFrag->SAScheduleTupleID_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->ServiceID_isUsed = 0u;
	exiFrag->RetryCounter_isUsed = 0u;
	exiFrag->SalesTariff_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->DC_EVStatus_isUsed = 0u;
	exiFrag->WeldingDetectionReq_isUsed = 0u;
	exiFrag->SigMeterReading_isUsed = 0u;
	exiFrag->FaultMsg_isUsed = 0u;
	exiFrag->PMax_isUsed = 0u;
	exiFrag->PowerSwitchClosed_isUsed = 0u;
	exiFrag->AC_EVSEStatus_isUsed = 0u;
	exiFrag->AC_EVSEStatus_isUsed = 0u;
	exiFrag->ParameterSetID_isUsed = 0u;
	exiFrag->ParameterSetID_isUsed = 0u;
	exiFrag->EAmount_isUsed = 0u;
	exiFrag->RetrievalMethod_isUsed = 0u;
	exiFrag->ChargingProfileEntryStart_isUsed = 0u;
	exiFrag->ServiceDiscoveryReq_isUsed = 0u;
	exiFrag->DepartureTime_isUsed = 0u;
	exiFrag->EVSEMinimumCurrentLimit_isUsed = 0u;
	exiFrag->CurrentDemandReq_isUsed = 0u;
	exiFrag->ChargeService_isUsed = 0u;
	exiFrag->BodyElement_isUsed = 0u;
	exiFrag->Cost_isUsed = 0u;
	exiFrag->ServiceScope_isUsed = 0u;
	exiFrag->HMACOutputLength_isUsed = 0u;
	exiFrag->MeterReading_isUsed = 0u;
	exiFrag->DHParams_isUsed = 0u;
	exiFrag->DHParams_isUsed = 0u;
	exiFrag->DHParams_isUsed = 0u;
	exiFrag->DHParams_isUsed = 0u;
	exiFrag->BulkChargingComplete_isUsed = 0u;
	exiFrag->SignatureProperty_isUsed = 0u;
	exiFrag->EVSEMaxCurrent_isUsed = 0u;
	exiFrag->DC_EVSEStatus_isUsed = 0u;
	exiFrag->DC_EVSEStatus_isUsed = 0u;
	exiFrag->DC_EVSEStatus_isUsed = 0u;
	exiFrag->DC_EVSEStatus_isUsed = 0u;
	exiFrag->Service_isUsed = 0u;
	exiFrag->PMaxScheduleID_isUsed = 0u;
	exiFrag->EVSEPresentCurrent_isUsed = 0u;
	exiFrag->EVSEVoltageLimitAchieved_isUsed = 0u;
	exiFrag->SessionSetupRes_isUsed = 0u;
	exiFrag->EVSEMaximumVoltageLimit_isUsed = 0u;
	exiFrag->SessionStopReq_isUsed = 0u;
	exiFrag->ContractAuthenticationReq_isUsed = 0u;
	exiFrag->ProfileEntry_isUsed = 0u;
	exiFrag->EVErrorCode_isUsed = 0u;
	exiFrag->RootCertificateID_isUsed = 0u;
	exiFrag->EVSEMinCurrent_isUsed = 0u;
	exiFrag->EVTargetVoltage_isUsed = 0u;
	exiFrag->ChargingStatusReq_isUsed = 0u;
	exiFrag->EVTargetVoltage_isUsed = 0u;
	exiFrag->Header_isUsed = 0u;
	exiFrag->GenChallenge_isUsed = 0u;
	exiFrag->XPath_isUsed = 0u;
	exiFrag->Q_isUsed = 0u;
	exiFrag->GenChallenge_isUsed = 0u;
	exiFrag->WeldingDetectionRes_isUsed = 0u;
}
#endif /* DEPLOY_DIN_CODEC_FRAGMENT */

void init_dinCurrentDemandResType(struct dinCurrentDemandResType* dinCurrentDemandResType) {
	dinCurrentDemandResType->EVSEMaximumVoltageLimit_isUsed = 0u;
	dinCurrentDemandResType->EVSEMaximumCurrentLimit_isUsed = 0u;
	dinCurrentDemandResType->EVSEMaximumPowerLimit_isUsed = 0u;
}

void init_dinCanonicalizationMethodType(struct dinCanonicalizationMethodType* dinCanonicalizationMethodType) {
}

void init_dinServiceDetailReqType(struct dinServiceDetailReqType* dinServiceDetailReqType) {
}

void init_dinAC_EVSEStatusType(struct dinAC_EVSEStatusType* dinAC_EVSEStatusType) {
}

void init_dinSPKIDataType(struct dinSPKIDataType* dinSPKIDataType) {
	dinSPKIDataType->SPKISexp.arrayLen = 0u;
}

void init_dinSessionSetupResType(struct dinSessionSetupResType* dinSessionSetupResType) {
	dinSessionSetupResType->DateTimeNow_isUsed = 0u;
}

void init_dinPGPDataType(struct dinPGPDataType* dinPGPDataType) {
	dinPGPDataType->PGPKeyID_isUsed = 0u;
	dinPGPDataType->PGPKeyPacket_isUsed = 0u;
}

void init_dinCableCheckResType(struct dinCableCheckResType* dinCableCheckResType) {
}

void init_dinChargeParameterDiscoveryResType(struct dinChargeParameterDiscoveryResType* dinChargeParameterDiscoveryResType) {
	dinChargeParameterDiscoveryResType->SASchedules_isUsed = 0u;
	dinChargeParameterDiscoveryResType->SAScheduleList_isUsed = 0u;
	dinChargeParameterDiscoveryResType->EVSEChargeParameter_isUsed = 0u;
	dinChargeParameterDiscoveryResType->AC_EVSEChargeParameter_isUsed = 0u;
	dinChargeParameterDiscoveryResType->DC_EVSEChargeParameter_isUsed = 0u;
}

void init_dinManifestType(struct dinManifestType* dinManifestType) {
	dinManifestType->Id_isUsed = 0u;
	dinManifestType->Reference.arrayLen = 0u;
}

void init_dinAC_EVChargeParameterType(struct dinAC_EVChargeParameterType* dinAC_EVChargeParameterType) {
}

void init_dinBodyBaseType(struct dinBodyBaseType* dinBodyBaseType) {
}

void init_dinDC_EVPowerDeliveryParameterType(struct dinDC_EVPowerDeliveryParameterType* dinDC_EVPowerDeliveryParameterType) {
	dinDC_EVPowerDeliveryParameterType->BulkChargingComplete_isUsed = 0u;
}

void init_dinCableCheckReqType(struct dinCableCheckReqType* dinCableCheckReqType) {
}

void init_dinDigestMethodType(struct dinDigestMethodType* dinDigestMethodType) {
}

void init_dinSalesTariffType(struct dinSalesTariffType* dinSalesTariffType) {
	dinSalesTariffType->SalesTariffDescription_isUsed = 0u;
	dinSalesTariffType->SalesTariffEntry.arrayLen = 0u;
}

void init_dinServicePaymentSelectionResType(struct dinServicePaymentSelectionResType* dinServicePaymentSelectionResType) {
}

void init_dinPreChargeReqType(struct dinPreChargeReqType* dinPreChargeReqType) {
}

void init_dinSAScheduleListType(struct dinSAScheduleListType* dinSAScheduleListType) {
	dinSAScheduleListType->SAScheduleTuple.arrayLen = 0u;
}

void init_dinCertificateChainType(struct dinCertificateChainType* dinCertificateChainType) {
	dinCertificateChainType->SubCertificates_isUsed = 0u;
}

void init_dinSignaturePropertiesType(struct dinSignaturePropertiesType* dinSignaturePropertiesType) {
	dinSignaturePropertiesType->Id_isUsed = 0u;
	dinSignaturePropertiesType->SignatureProperty.arrayLen = 0u;
}

void init_dinMessageHeaderType(struct dinMessageHeaderType* dinMessageHeaderType) {
	dinMessageHeaderType->Notification_isUsed = 0u;
	dinMessageHeaderType->Signature_isUsed = 0u;
}

void init_dinPreChargeResType(struct dinPreChargeResType* dinPreChargeResType) {
}

void init_dinMeteringReceiptResType(struct dinMeteringReceiptResType* dinMeteringReceiptResType) {
}

void init_dinNotificationType(struct dinNotificationType* dinNotificationType) {
	dinNotificationType->FaultMsg_isUsed = 0u;
}

void init_dinContractAuthenticationReqType(struct dinContractAuthenticationReqType* dinContractAuthenticationReqType) {
	dinContractAuthenticationReqType->Id_isUsed = 0u;
	dinContractAuthenticationReqType->GenChallenge_isUsed = 0u;
}

void init_dinPhysicalValueType(struct dinPhysicalValueType* dinPhysicalValueType) {
	dinPhysicalValueType->Unit_isUsed = 0u;
}

void init_dinChargingStatusResType(struct dinChargingStatusResType* dinChargingStatusResType) {
	dinChargingStatusResType->EVSEMaxCurrent_isUsed = 0u;
	dinChargingStatusResType->MeterInfo_isUsed = 0u;
}

void init_dinDC_EVSEStatusType(struct dinDC_EVSEStatusType* dinDC_EVSEStatusType) {
	dinDC_EVSEStatusType->EVSEIsolationStatus_isUsed = 0u;
}

void init_dinProfileEntryType(struct dinProfileEntryType* dinProfileEntryType) {
}

void init_dinAC_EVSEChargeParameterType(struct dinAC_EVSEChargeParameterType* dinAC_EVSEChargeParameterType) {
}

void init_dinServiceDiscoveryResType(struct dinServiceDiscoveryResType* dinServiceDiscoveryResType) {
	dinServiceDiscoveryResType->ServiceList_isUsed = 0u;
}

void init_dinSignatureType(struct dinSignatureType* dinSignatureType) {
	dinSignatureType->Id_isUsed = 0u;
	dinSignatureType->KeyInfo_isUsed = 0u;
	dinSignatureType->Object.arrayLen = 0u;
}

void init_dinPaymentOptionsType(struct dinPaymentOptionsType* dinPaymentOptionsType) {
	dinPaymentOptionsType->PaymentOption.arrayLen = 0u;
}

void init_dinParameterType(struct dinParameterType* dinParameterType) {
	dinParameterType->boolValue_isUsed = 0u;
	dinParameterType->byteValue_isUsed = 0u;
	dinParameterType->shortValue_isUsed = 0u;
	dinParameterType->intValue_isUsed = 0u;
	dinParameterType->physicalValue_isUsed = 0u;
	dinParameterType->stringValue_isUsed = 0u;
}

void init_dinSignaturePropertyType(struct dinSignaturePropertyType* dinSignaturePropertyType) {
	dinSignaturePropertyType->Id_isUsed = 0u;
}

void init_dinEVPowerDeliveryParameterType(struct dinEVPowerDeliveryParameterType* dinEVPowerDeliveryParameterType) {
}

void init_dinWeldingDetectionReqType(struct dinWeldingDetectionReqType* dinWeldingDetectionReqType) {
}

void init_dinTransformsType(struct dinTransformsType* dinTransformsType) {
	dinTransformsType->Transform.arrayLen = 0u;
}

void init_dinServiceType(struct dinServiceType* dinServiceType) {
}

void init_dinBodyType(struct dinBodyType* dinBodyType) {
	dinBodyType->BodyElement_isUsed = 0u;
	dinBodyType->SessionSetupReq_isUsed = 0u;
	dinBodyType->SessionSetupRes_isUsed = 0u;
	dinBodyType->ServiceDiscoveryReq_isUsed = 0u;
	dinBodyType->ServiceDiscoveryRes_isUsed = 0u;
	dinBodyType->ServiceDetailReq_isUsed = 0u;
	dinBodyType->ServiceDetailRes_isUsed = 0u;
	dinBodyType->ServicePaymentSelectionReq_isUsed = 0u;
	dinBodyType->ServicePaymentSelectionRes_isUsed = 0u;
	dinBodyType->PaymentDetailsReq_isUsed = 0u;
	dinBodyType->PaymentDetailsRes_isUsed = 0u;
	dinBodyType->ContractAuthenticationReq_isUsed = 0u;
	dinBodyType->ContractAuthenticationRes_isUsed = 0u;
	dinBodyType->ChargeParameterDiscoveryReq_isUsed = 0u;
	dinBodyType->ChargeParameterDiscoveryRes_isUsed = 0u;
	dinBodyType->PowerDeliveryReq_isUsed = 0u;
	dinBodyType->PowerDeliveryRes_isUsed = 0u;
	dinBodyType->ChargingStatusReq_isUsed = 0u;
	dinBodyType->ChargingStatusRes_isUsed = 0u;
	dinBodyType->MeteringReceiptReq_isUsed = 0u;
	dinBodyType->MeteringReceiptRes_isUsed = 0u;
	dinBodyType->SessionStopReq_isUsed = 0u;
	dinBodyType->SessionStopRes_isUsed = 0u;
	dinBodyType->CertificateUpdateReq_isUsed = 0u;
	dinBodyType->CertificateUpdateRes_isUsed = 0u;
	dinBodyType->CertificateInstallationReq_isUsed = 0u;
	dinBodyType->CertificateInstallationRes_isUsed = 0u;
	dinBodyType->CableCheckReq_isUsed = 0u;
	dinBodyType->CableCheckRes_isUsed = 0u;
	dinBodyType->PreChargeReq_isUsed = 0u;
	dinBodyType->PreChargeRes_isUsed = 0u;
	dinBodyType->CurrentDemandReq_isUsed = 0u;
	dinBodyType->CurrentDemandRes_isUsed = 0u;
	dinBodyType->WeldingDetectionReq_isUsed = 0u;
	dinBodyType->WeldingDetectionRes_isUsed = 0u;
}

void init_dinDC_EVStatusType(struct dinDC_EVStatusType* dinDC_EVStatusType) {
	dinDC_EVStatusType->EVCabinConditioning_isUsed = 0u;
	dinDC_EVStatusType->EVRESSConditioning_isUsed = 0u;
}

void init_dinPMaxScheduleEntryType(struct dinPMaxScheduleEntryType* dinPMaxScheduleEntryType) {
	dinPMaxScheduleEntryType->TimeInterval_isUsed = 0u;
	dinPMaxScheduleEntryType->RelativeTimeInterval_isUsed = 0u;
}

void init_dinPMaxScheduleType(struct dinPMaxScheduleType* dinPMaxScheduleType) {
	dinPMaxScheduleType->PMaxScheduleEntry.arrayLen = 0u;
}

void init_dinSelectedServiceType(struct dinSelectedServiceType* dinSelectedServiceType) {
	dinSelectedServiceType->ParameterSetID_isUsed = 0u;
}

void init_dinIntervalType(struct dinIntervalType* dinIntervalType) {
}

void init_dinCertificateInstallationReqType(struct dinCertificateInstallationReqType* dinCertificateInstallationReqType) {
	dinCertificateInstallationReqType->Id_isUsed = 0u;
}

void init_dinTransformType(struct dinTransformType* dinTransformType) {
	dinTransformType->XPath.arrayLen = 0u;
}

void init_dinKeyValueType(struct dinKeyValueType* dinKeyValueType) {
	dinKeyValueType->DSAKeyValue_isUsed = 0u;
	dinKeyValueType->RSAKeyValue_isUsed = 0u;
}

void init_dinRetrievalMethodType(struct dinRetrievalMethodType* dinRetrievalMethodType) {
	dinRetrievalMethodType->URI_isUsed = 0u;
	dinRetrievalMethodType->Type_isUsed = 0u;
	dinRetrievalMethodType->Transforms_isUsed = 0u;
}

void init_dinEVChargeParameterType(struct dinEVChargeParameterType* dinEVChargeParameterType) {
}

void init_dinServiceChargeType(struct dinServiceChargeType* dinServiceChargeType) {
}

void init_dinParameterSetType(struct dinParameterSetType* dinParameterSetType) {
	dinParameterSetType->Parameter.arrayLen = 0u;
}

void init_dinReferenceType(struct dinReferenceType* dinReferenceType) {
	dinReferenceType->Id_isUsed = 0u;
	dinReferenceType->URI_isUsed = 0u;
	dinReferenceType->Type_isUsed = 0u;
	dinReferenceType->Transforms_isUsed = 0u;
}

void init_dinSessionStopResType(struct dinSessionStopResType* dinSessionStopResType) {
}

void init_dinObjectType(struct dinObjectType* dinObjectType) {
	dinObjectType->Id_isUsed = 0u;
	dinObjectType->MimeType_isUsed = 0u;
	dinObjectType->Encoding_isUsed = 0u;
}

void init_dinSignatureValueType(struct dinSignatureValueType* dinSignatureValueType) {
	dinSignatureValueType->Id_isUsed = 0u;
}

void init_dinSelectedServiceListType(struct dinSelectedServiceListType* dinSelectedServiceListType) {
	dinSelectedServiceListType->SelectedService.arrayLen = 0u;
}

void init_dinSalesTariffEntryType(struct dinSalesTariffEntryType* dinSalesTariffEntryType) {
	dinSalesTariffEntryType->TimeInterval_isUsed = 0u;
	dinSalesTariffEntryType->RelativeTimeInterval_isUsed = 0u;
	dinSalesTariffEntryType->ConsumptionCost.arrayLen = 0u;
}

void init_dinConsumptionCostType(struct dinConsumptionCostType* dinConsumptionCostType) {
	dinConsumptionCostType->Cost.arrayLen = 0u;
}

void init_dinRSAKeyValueType(struct dinRSAKeyValueType* dinRSAKeyValueType) {
}

void init_dinMeteringReceiptReqType(struct dinMeteringReceiptReqType* dinMeteringReceiptReqType) {
	dinMeteringReceiptReqType->Id_isUsed = 0u;
	dinMeteringReceiptReqType->SAScheduleTupleID_isUsed = 0u;
}

void init_dinSAScheduleTupleType(struct dinSAScheduleTupleType* dinSAScheduleTupleType) {
	dinSAScheduleTupleType->SalesTariff_isUsed = 0u;
}

void init_dinRelativeTimeIntervalType(struct dinRelativeTimeIntervalType* dinRelativeTimeIntervalType) {
	dinRelativeTimeIntervalType->duration_isUsed = 0u;
}

void init_dinChargingProfileType(struct dinChargingProfileType* dinChargingProfileType) {
	dinChargingProfileType->ProfileEntry.arrayLen = 0u;
}

void init_dinCurrentDemandReqType(struct dinCurrentDemandReqType* dinCurrentDemandReqType) {
	dinCurrentDemandReqType->EVMaximumVoltageLimit_isUsed = 0u;
	dinCurrentDemandReqType->EVMaximumCurrentLimit_isUsed = 0u;
	dinCurrentDemandReqType->EVMaximumPowerLimit_isUsed = 0u;
	dinCurrentDemandReqType->BulkChargingComplete_isUsed = 0u;
	dinCurrentDemandReqType->RemainingTimeToFullSoC_isUsed = 0u;
	dinCurrentDemandReqType->RemainingTimeToBulkSoC_isUsed = 0u;
}

void init_dinKeyInfoType(struct dinKeyInfoType* dinKeyInfoType) {
	dinKeyInfoType->Id_isUsed = 0u;
	dinKeyInfoType->KeyName.arrayLen = 0u;
	dinKeyInfoType->KeyValue.arrayLen = 0u;
	dinKeyInfoType->RetrievalMethod.arrayLen = 0u;
	dinKeyInfoType->X509Data.arrayLen = 0u;
	dinKeyInfoType->PGPData.arrayLen = 0u;
	dinKeyInfoType->SPKIData.arrayLen = 0u;
	dinKeyInfoType->MgmtData.arrayLen = 0u;
}

void init_dinServicePaymentSelectionReqType(struct dinServicePaymentSelectionReqType* dinServicePaymentSelectionReqType) {
}

void init_dinContractAuthenticationResType(struct dinContractAuthenticationResType* dinContractAuthenticationResType) {
}

void init_dinChargingStatusReqType(struct dinChargingStatusReqType* dinChargingStatusReqType) {
}

void init_dinPaymentDetailsResType(struct dinPaymentDetailsResType* dinPaymentDetailsResType) {
}

void init_dinSASchedulesType(struct dinSASchedulesType* dinSASchedulesType) {
}

void init_dinPaymentDetailsReqType(struct dinPaymentDetailsReqType* dinPaymentDetailsReqType) {
}

void init_dinServiceTagType(struct dinServiceTagType* dinServiceTagType) {
	dinServiceTagType->ServiceName_isUsed = 0u;
	dinServiceTagType->ServiceScope_isUsed = 0u;
}

void init_dinChargeParameterDiscoveryReqType(struct dinChargeParameterDiscoveryReqType* dinChargeParameterDiscoveryReqType) {
	dinChargeParameterDiscoveryReqType->EVChargeParameter_isUsed = 0u;
	dinChargeParameterDiscoveryReqType->AC_EVChargeParameter_isUsed = 0u;
	dinChargeParameterDiscoveryReqType->DC_EVChargeParameter_isUsed = 0u;
}

void init_dinServiceParameterListType(struct dinServiceParameterListType* dinServiceParameterListType) {
	dinServiceParameterListType->ParameterSet.arrayLen = 0u;
}

void init_dinEVSEStatusType(struct dinEVSEStatusType* dinEVSEStatusType) {
}

void init_dinServiceDiscoveryReqType(struct dinServiceDiscoveryReqType* dinServiceDiscoveryReqType) {
	dinServiceDiscoveryReqType->ServiceScope_isUsed = 0u;
	dinServiceDiscoveryReqType->ServiceCategory_isUsed = 0u;
}

void init_dinWeldingDetectionResType(struct dinWeldingDetectionResType* dinWeldingDetectionResType) {
}

void init_dinCertificateUpdateReqType(struct dinCertificateUpdateReqType* dinCertificateUpdateReqType) {
	dinCertificateUpdateReqType->Id_isUsed = 0u;
}

void init_dinServiceTagListType(struct dinServiceTagListType* dinServiceTagListType) {
	dinServiceTagListType->Service.arrayLen = 0u;
}

void init_dinSignedInfoType(struct dinSignedInfoType* dinSignedInfoType) {
	dinSignedInfoType->Id_isUsed = 0u;
	dinSignedInfoType->Reference.arrayLen = 0u;
}

void init_dinPowerDeliveryReqType(struct dinPowerDeliveryReqType* dinPowerDeliveryReqType) {
	dinPowerDeliveryReqType->ChargingProfile_isUsed = 0u;
	dinPowerDeliveryReqType->EVPowerDeliveryParameter_isUsed = 0u;
	dinPowerDeliveryReqType->DC_EVPowerDeliveryParameter_isUsed = 0u;
}

void init_dinCostType(struct dinCostType* dinCostType) {
	dinCostType->amountMultiplier_isUsed = 0u;
}

void init_dinDC_EVChargeParameterType(struct dinDC_EVChargeParameterType* dinDC_EVChargeParameterType) {
	dinDC_EVChargeParameterType->EVMaximumPowerLimit_isUsed = 0u;
	dinDC_EVChargeParameterType->EVEnergyCapacity_isUsed = 0u;
	dinDC_EVChargeParameterType->EVEnergyRequest_isUsed = 0u;
	dinDC_EVChargeParameterType->FullSOC_isUsed = 0u;
	dinDC_EVChargeParameterType->BulkSOC_isUsed = 0u;
}

void init_dinSubCertificatesType(struct dinSubCertificatesType* dinSubCertificatesType) {
	dinSubCertificatesType->Certificate.arrayLen = 0u;
}

void init_dinSessionSetupReqType(struct dinSessionSetupReqType* dinSessionSetupReqType) {
}

void init_dinAnonType_V2G_Message(struct dinAnonType_V2G_Message* dinAnonType_V2G_Message) {
}

void init_dinMeterInfoType(struct dinMeterInfoType* dinMeterInfoType) {
	dinMeterInfoType->MeterReading_isUsed = 0u;
	dinMeterInfoType->SigMeterReading_isUsed = 0u;
	dinMeterInfoType->MeterStatus_isUsed = 0u;
	dinMeterInfoType->TMeter_isUsed = 0u;
}

void init_dinCertificateInstallationResType(struct dinCertificateInstallationResType* dinCertificateInstallationResType) {
}

void init_dinServiceDetailResType(struct dinServiceDetailResType* dinServiceDetailResType) {
	dinServiceDetailResType->ServiceParameterList_isUsed = 0u;
}

void init_dinX509IssuerSerialType(struct dinX509IssuerSerialType* dinX509IssuerSerialType) {
}

void init_dinDC_EVSEChargeParameterType(struct dinDC_EVSEChargeParameterType* dinDC_EVSEChargeParameterType) {
	dinDC_EVSEChargeParameterType->EVSEMaximumPowerLimit_isUsed = 0u;
	dinDC_EVSEChargeParameterType->EVSECurrentRegulationTolerance_isUsed = 0u;
	dinDC_EVSEChargeParameterType->EVSEEnergyToBeDelivered_isUsed = 0u;
}

void init_dinEVStatusType(struct dinEVStatusType* dinEVStatusType) {
}

void init_dinX509DataType(struct dinX509DataType* dinX509DataType) {
	dinX509DataType->X509IssuerSerial.arrayLen = 0u;
	dinX509DataType->X509SKI.arrayLen = 0u;
	dinX509DataType->X509SubjectName.arrayLen = 0u;
	dinX509DataType->X509Certificate.arrayLen = 0u;
	dinX509DataType->X509CRL.arrayLen = 0u;
}

void init_dinPowerDeliveryResType(struct dinPowerDeliveryResType* dinPowerDeliveryResType) {
	dinPowerDeliveryResType->EVSEStatus_isUsed = 0u;
	dinPowerDeliveryResType->AC_EVSEStatus_isUsed = 0u;
	dinPowerDeliveryResType->DC_EVSEStatus_isUsed = 0u;
}

void init_dinDSAKeyValueType(struct dinDSAKeyValueType* dinDSAKeyValueType) {
	dinDSAKeyValueType->P_isUsed = 0u;
	dinDSAKeyValueType->Q_isUsed = 0u;
	dinDSAKeyValueType->G_isUsed = 0u;
	dinDSAKeyValueType->J_isUsed = 0u;
	dinDSAKeyValueType->Seed_isUsed = 0u;
	dinDSAKeyValueType->PgenCounter_isUsed = 0u;
}

void init_dinCertificateUpdateResType(struct dinCertificateUpdateResType* dinCertificateUpdateResType) {
}

void init_dinSessionStopType(struct dinSessionStopType* dinSessionStopType) {
}

void init_dinEVSEChargeParameterType(struct dinEVSEChargeParameterType* dinEVSEChargeParameterType) {
}

void init_dinEntryType(struct dinEntryType* dinEntryType) {
	dinEntryType->TimeInterval_isUsed = 0u;
	dinEntryType->RelativeTimeInterval_isUsed = 0u;
}

void init_dinListOfRootCertificateIDsType(struct dinListOfRootCertificateIDsType* dinListOfRootCertificateIDsType) {
	dinListOfRootCertificateIDsType->RootCertificateID.arrayLen = 0u;
}

void init_dinSignatureMethodType(struct dinSignatureMethodType* dinSignatureMethodType) {
	dinSignatureMethodType->HMACOutputLength_isUsed = 0u;
}



#endif /* DEPLOY_DIN_CODEC */

#endif

