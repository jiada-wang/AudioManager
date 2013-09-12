 /*
 * This file was generated by the CommonAPI Generators.
 *
 * This file was generated by the CommonAPI Generators.
 *
 * This file was generated by the CommonAPI Generators.
 *
 * Copyright (C) 2012, BMW AG
 *
 * This file is part of GENIVI Project AudioManager.
 *
 * Contributions are licensed to the GENIVI Alliance under one or more
 * Contribution License Agreements.
 *
 * \copyright
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License, v. 2.0. If a  copy of the MPL was not distributed with
 * this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 *
 * \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
 * \author Christian Linke christian.linke@bmw.de BMW 2013
 *
 * For further information see http://www.genivi.org/.
 */
 #ifndef ORG_GENIVI_AM_Routing_Control_Observer_PROXY_BASE_H_
 #define ORG_GENIVI_AM_Routing_Control_Observer_PROXY_BASE_H_
 
 #include "RoutingControlObserver.h"
 
 
 #include <org/genivi/am.h>
 
 #define COMMONAPI_INTERNAL_COMPILATION
 
 #include <CommonAPI/InputStream.h>
 #include <CommonAPI/OutputStream.h>
 #include <CommonAPI/SerializableStruct.h>
 #include <cstdint>
 #include <string>
 #include <vector>

 #include <CommonAPI/Attribute.h>
 #include <CommonAPI/Proxy.h>
 #include <functional>
 #include <future>
 
 #undef COMMONAPI_INTERNAL_COMPILATION

 namespace org {
 namespace genivi {
 namespace am {

 class RoutingControlObserverProxyBase: virtual public CommonAPI::Proxy {
  public:
     typedef CommonAPI::ObservableAttribute<am_RoutingReady_e> RoutingReadyAttribute;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckConnectAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckDisconnectAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSinkVolumeChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSourceVolumeChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSourceStateAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSinkSoundPropertiesAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSinkSoundPropertyAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSourceSoundPropertiesAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetSourceSoundPropertyAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckCrossFadingAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSourceVolumeTickAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSinkVolumeTickAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_domainID_t&, const am_Error_e&)> PeekDomainAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_domainID_t&, const am_Error_e&)> RegisterDomainAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> DeregisterDomainAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_gatewayID_t&, const am_Error_e&)> RegisterGatewayAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> DeregisterGatewayAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_sinkID_t&, const am_Error_e&)> PeekSinkAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_sinkID_t&, const am_Error_e&)> RegisterSinkAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> DeregisterSinkAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_sourceID_t&, const am_Error_e&)> PeekSourceAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_sourceID_t&, const am_Error_e&)> RegisterSourceAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> DeregisterSourceAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_crossfaderID_t&, const am_Error_e&)> RegisterCrossfaderAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> DeregisterCrossfaderAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_sourceClass_t&, const am_Error_e&)> PeekSourceClassIDAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_sinkClass_t&, const am_Error_e&)> PeekSinkClassIDAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookInterruptStatusChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookDomainRegistrationCompleteAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookSinkAvailablityStatusChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookSourceAvailablityStatusChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookDomainStateChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookTimingInformationChangedAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> SendChangedDataAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> UpdateGatewayAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> UpdateSinkAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&, const am_Error_e&)> UpdateSourceAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSetVolumesAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSinkNotificationConfigurationAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> AckSourceNotificationConfigurationAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookSinkNotificationDataChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> HookSourceNotificationDataChangeAsyncCallback;
     typedef std::function<void(const CommonAPI::CallStatus&)> ConfirmRoutingRundownAsyncCallback;

     virtual RoutingReadyAttribute& getRoutingReadyAttribute() = 0;



     virtual void ackConnect(const am_Handle_s& handle, const am_connectionID_t& connectionID, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackConnectAsync(const am_Handle_s& handle, const am_connectionID_t& connectionID, const am_Error_e& error, AckConnectAsyncCallback callback) = 0;

     virtual void ackDisconnect(const am_Handle_s& handle, const am_connectionID_t& connectionID, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackDisconnectAsync(const am_Handle_s& handle, const am_connectionID_t& connectionID, const am_Error_e& error, AckDisconnectAsyncCallback callback) = 0;

     virtual void ackSetSinkVolumeChange(const am_Handle_s& handle, const am_volume_t& volume, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSinkVolumeChangeAsync(const am_Handle_s& handle, const am_volume_t& volume, const am_Error_e& error, AckSetSinkVolumeChangeAsyncCallback callback) = 0;

     virtual void ackSetSourceVolumeChange(const am_Handle_s& handle, const am_volume_t& volume, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSourceVolumeChangeAsync(const am_Handle_s& handle, const am_volume_t& volume, const am_Error_e& error, AckSetSourceVolumeChangeAsyncCallback callback) = 0;

     virtual void ackSetSourceState(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSourceStateAsync(const am_Handle_s& handle, const am_Error_e& error, AckSetSourceStateAsyncCallback callback) = 0;

     virtual void ackSetSinkSoundProperties(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSinkSoundPropertiesAsync(const am_Handle_s& handle, const am_Error_e& error, AckSetSinkSoundPropertiesAsyncCallback callback) = 0;

     virtual void ackSetSinkSoundProperty(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSinkSoundPropertyAsync(const am_Handle_s& handle, const am_Error_e& error, AckSetSinkSoundPropertyAsyncCallback callback) = 0;

     virtual void ackSetSourceSoundProperties(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSourceSoundPropertiesAsync(const am_Handle_s& handle, const am_Error_e& error, AckSetSourceSoundPropertiesAsyncCallback callback) = 0;

     virtual void ackSetSourceSoundProperty(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetSourceSoundPropertyAsync(const am_Handle_s& handle, const am_Error_e& error, AckSetSourceSoundPropertyAsyncCallback callback) = 0;

     virtual void ackCrossFading(const am_Handle_s& handle, const am_HotSink_e& hotSink, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackCrossFadingAsync(const am_Handle_s& handle, const am_HotSink_e& hotSink, const am_Error_e& error, AckCrossFadingAsyncCallback callback) = 0;

     virtual void ackSourceVolumeTick(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_volume_t& volume, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSourceVolumeTickAsync(const am_Handle_s& handle, const am_sourceID_t& sourceID, const am_volume_t& volume, AckSourceVolumeTickAsyncCallback callback) = 0;

     virtual void ackSinkVolumeTick(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_volume_t& volume, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSinkVolumeTickAsync(const am_Handle_s& handle, const am_sinkID_t& sinkID, const am_volume_t& volume, AckSinkVolumeTickAsyncCallback callback) = 0;

     virtual void peekDomain(const std::string& name, CommonAPI::CallStatus& callStatus, am_domainID_t& domainID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> peekDomainAsync(const std::string& name, PeekDomainAsyncCallback callback) = 0;

     virtual void registerDomain(const am_Domain_s& domainData, const std::string& returnBusname, const std::string& returnInterface, CommonAPI::CallStatus& callStatus, am_domainID_t& domainID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> registerDomainAsync(const am_Domain_s& domainData, const std::string& returnBusname, const std::string& returnInterface, RegisterDomainAsyncCallback callback) = 0;

     virtual void deregisterDomain(const am_domainID_t& domainID, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> deregisterDomainAsync(const am_domainID_t& domainID, DeregisterDomainAsyncCallback callback) = 0;

     virtual void registerGateway(const am_Gateway_s& gatewayData, CommonAPI::CallStatus& callStatus, am_gatewayID_t& gatewayID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> registerGatewayAsync(const am_Gateway_s& gatewayData, RegisterGatewayAsyncCallback callback) = 0;

     virtual void deregisterGateway(const am_gatewayID_t& gatewayID, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> deregisterGatewayAsync(const am_gatewayID_t& gatewayID, DeregisterGatewayAsyncCallback callback) = 0;

     virtual void peekSink(const std::string& name, CommonAPI::CallStatus& callStatus, am_sinkID_t& sinkID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> peekSinkAsync(const std::string& name, PeekSinkAsyncCallback callback) = 0;

     virtual void registerSink(const am_Sink_s& sinkData, CommonAPI::CallStatus& callStatus, am_sinkID_t& sinkID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> registerSinkAsync(const am_Sink_s& sinkData, RegisterSinkAsyncCallback callback) = 0;

     virtual void deregisterSink(const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> deregisterSinkAsync(const am_sinkID_t& sinkID, DeregisterSinkAsyncCallback callback) = 0;

     virtual void peekSource(const std::string& name, CommonAPI::CallStatus& callStatus, am_sourceID_t& sourceID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> peekSourceAsync(const std::string& name, PeekSourceAsyncCallback callback) = 0;

     virtual void registerSource(const am_Source_s& sourceData, CommonAPI::CallStatus& callStatus, am_sourceID_t& sourceID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> registerSourceAsync(const am_Source_s& sourceData, RegisterSourceAsyncCallback callback) = 0;

     virtual void deregisterSource(const am_sourceID_t& sourceID, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> deregisterSourceAsync(const am_sourceID_t& sourceID, DeregisterSourceAsyncCallback callback) = 0;

     virtual void registerCrossfader(const am_Crossfader_s& crossfaderData, CommonAPI::CallStatus& callStatus, am_crossfaderID_t& crossfaderID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> registerCrossfaderAsync(const am_Crossfader_s& crossfaderData, RegisterCrossfaderAsyncCallback callback) = 0;

     virtual void deregisterCrossfader(const am_crossfaderID_t& crossfaderID, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> deregisterCrossfaderAsync(const am_crossfaderID_t& crossfaderID, DeregisterCrossfaderAsyncCallback callback) = 0;

     virtual void peekSourceClassID(const std::string& name, CommonAPI::CallStatus& callStatus, am_sourceClass_t& sourceClassID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> peekSourceClassIDAsync(const std::string& name, PeekSourceClassIDAsyncCallback callback) = 0;

     virtual void peekSinkClassID(const std::string& name, CommonAPI::CallStatus& callStatus, am_sinkClass_t& sinkClassID, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> peekSinkClassIDAsync(const std::string& name, PeekSinkClassIDAsyncCallback callback) = 0;

     virtual void hookInterruptStatusChange(const am_sourceID_t& sourceID, const am_InterruptState_e& interruptState, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookInterruptStatusChangeAsync(const am_sourceID_t& sourceID, const am_InterruptState_e& interruptState, HookInterruptStatusChangeAsyncCallback callback) = 0;

     virtual void hookDomainRegistrationComplete(const am_domainID_t& domainID, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookDomainRegistrationCompleteAsync(const am_domainID_t& domainID, HookDomainRegistrationCompleteAsyncCallback callback) = 0;

     virtual void hookSinkAvailablityStatusChange(const am_sinkID_t& sinkID, const am_Availability_s& availability, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookSinkAvailablityStatusChangeAsync(const am_sinkID_t& sinkID, const am_Availability_s& availability, HookSinkAvailablityStatusChangeAsyncCallback callback) = 0;

     virtual void hookSourceAvailablityStatusChange(const am_sourceID_t& sourceID, const am_Availability_s& availability, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookSourceAvailablityStatusChangeAsync(const am_sourceID_t& sourceID, const am_Availability_s& availability, HookSourceAvailablityStatusChangeAsyncCallback callback) = 0;

     virtual void hookDomainStateChange(const am_domainID_t& domainID, const am_DomainState_e& domainState, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookDomainStateChangeAsync(const am_domainID_t& domainID, const am_DomainState_e& domainState, HookDomainStateChangeAsyncCallback callback) = 0;

     virtual void hookTimingInformationChanged(const am_connectionID_t& connectionID, const am_timeSync_t& delay, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookTimingInformationChangedAsync(const am_connectionID_t& connectionID, const am_timeSync_t& delay, HookTimingInformationChangedAsyncCallback callback) = 0;

     virtual void sendChangedData(const am_EarlyData_L& earlyData, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> sendChangedDataAsync(const am_EarlyData_L& earlyData, SendChangedDataAsyncCallback callback) = 0;

     virtual void updateGateway(const am_gatewayID_t& gatewayID, const am_ConnectionFormat_L& listSourceFormats, const am_ConnectionFormat_L& listSinkFormats, const am_Convertion_L& convertionMatrix, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> updateGatewayAsync(const am_gatewayID_t& gatewayID, const am_ConnectionFormat_L& listSourceFormats, const am_ConnectionFormat_L& listSinkFormats, const am_Convertion_L& convertionMatrix, UpdateGatewayAsyncCallback callback) = 0;

     virtual void updateSink(const am_sinkID_t& sinkID, const am_sinkClass_t& sinkClassID, const am_SoundProperty_L& listSoundProperties, const am_ConnectionFormat_L& listConnectionFormats, const am_MainSoundProperty_L& listMainSoundProperties, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> updateSinkAsync(const am_sinkID_t& sinkID, const am_sinkClass_t& sinkClassID, const am_SoundProperty_L& listSoundProperties, const am_ConnectionFormat_L& listConnectionFormats, const am_MainSoundProperty_L& listMainSoundProperties, UpdateSinkAsyncCallback callback) = 0;

     virtual void updateSource(const am_sourceID_t& sourceID, const am_sourceClass_t& sourceClassID, const am_SoundProperty_L& listSoundProperties, const am_ConnectionFormat_L& listConnectionFormats, const am_MainSoundProperty_L& listMainSoundProperties, CommonAPI::CallStatus& callStatus, am_Error_e& error) = 0;
     virtual std::future<CommonAPI::CallStatus> updateSourceAsync(const am_sourceID_t& sourceID, const am_sourceClass_t& sourceClassID, const am_SoundProperty_L& listSoundProperties, const am_ConnectionFormat_L& listConnectionFormats, const am_MainSoundProperty_L& listMainSoundProperties, UpdateSourceAsyncCallback callback) = 0;

     virtual void ackSetVolumes(const am_Handle_s& handle, const am_Volumes_L& listvolumes, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSetVolumesAsync(const am_Handle_s& handle, const am_Volumes_L& listvolumes, const am_Error_e& error, AckSetVolumesAsyncCallback callback) = 0;

     virtual void ackSinkNotificationConfiguration(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSinkNotificationConfigurationAsync(const am_Handle_s& handle, const am_Error_e& error, AckSinkNotificationConfigurationAsyncCallback callback) = 0;

     virtual void ackSourceNotificationConfiguration(const am_Handle_s& handle, const am_Error_e& error, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> ackSourceNotificationConfigurationAsync(const am_Handle_s& handle, const am_Error_e& error, AckSourceNotificationConfigurationAsyncCallback callback) = 0;

     virtual void hookSinkNotificationDataChange(const am_sinkID_t& sinkID, const am_NotificationPayload_s& payload, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookSinkNotificationDataChangeAsync(const am_sinkID_t& sinkID, const am_NotificationPayload_s& payload, HookSinkNotificationDataChangeAsyncCallback callback) = 0;

     virtual void hookSourceNotificationDataChange(const am_sourceID_t& sourceID, const am_NotificationPayload_s& payload, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> hookSourceNotificationDataChangeAsync(const am_sourceID_t& sourceID, const am_NotificationPayload_s& payload, HookSourceNotificationDataChangeAsyncCallback callback) = 0;

     virtual void confirmRoutingRundown(const std::string& domainName, CommonAPI::CallStatus& callStatus) = 0;
     virtual std::future<CommonAPI::CallStatus> confirmRoutingRundownAsync(const std::string& domainName, ConfirmRoutingRundownAsyncCallback callback) = 0;
 };

 } // namespace am
 } // namespace genivi
 } // namespace org

 #endif // ORG_GENIVI_AM_Routing_Control_Observer_PROXY_BASE_H_
