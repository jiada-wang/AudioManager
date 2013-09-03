/*
* This file was generated by the CommonAPI Generators.
*
 *  Copyright (c) 2012 BMW
 *
 *  \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
 *
 *  \copyright
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction,
 *  including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 *  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *  For further information see http://www.genivi.org/.
*/
#ifndef ORG_GENIVI_AUDIOMANAGER_Routing_Sender_DBUS_PROXY_H_
#define ORG_GENIVI_AUDIOMANAGER_Routing_Sender_DBUS_PROXY_H_

#include <org/genivi/audiomanager/RoutingSenderProxyBase.h>

#define COMMONAPI_INTERNAL_COMPILATION

#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace org {
namespace genivi {
namespace audiomanager {

class RoutingSenderDBusProxy: virtual public RoutingSenderProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    RoutingSenderDBusProxy(
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);

    virtual ~RoutingSenderDBusProxy() { }




    virtual void asyncSetSourceState(const uint16_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_SourceState_e& sourceState, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSourceStateAsync(const uint16_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_SourceState_e& sourceState, AsyncSetSourceStateAsyncCallback callback);

    virtual void setDomainState(const am_gen::am_domainID_t& domainID, const am_gen::am_DomainState_e& domainState, CommonAPI::CallStatus& callStatus, am_gen::am_Error_e& error);
    virtual std::future<CommonAPI::CallStatus> setDomainStateAsync(const am_gen::am_domainID_t& domainID, const am_gen::am_DomainState_e& domainState, SetDomainStateAsyncCallback callback);

    virtual void asyncSetSourceVolume(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_volume_t& volume, const am_gen::am_RampType_e& ramp, const am_gen::am_time_t& time, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSourceVolumeAsync(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_volume_t& volume, const am_gen::am_RampType_e& ramp, const am_gen::am_time_t& time, AsyncSetSourceVolumeAsyncCallback callback);

    virtual void asyncSetSinkVolume(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_volume_t& volume, const am_gen::am_RampType_e& ramp, const am_gen::am_time_t& time, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSinkVolumeAsync(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_volume_t& volume, const am_gen::am_RampType_e& ramp, const am_gen::am_time_t& time, AsyncSetSinkVolumeAsyncCallback callback);

    virtual void asyncConnect(const am_gen::am_handle_t& handle, const am_gen::am_connectionID_t& connectionID, const am_gen::am_sourceID_t& sourceID, const am_gen::am_sinkID_t& sinkID, const am_gen::am_ConnectionFormat_e& connectionFormat, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncConnectAsync(const am_gen::am_handle_t& handle, const am_gen::am_connectionID_t& connectionID, const am_gen::am_sourceID_t& sourceID, const am_gen::am_sinkID_t& sinkID, const am_gen::am_ConnectionFormat_e& connectionFormat, AsyncConnectAsyncCallback callback);

    virtual void asyncDisconnect(const am_gen::am_handle_t& handle, const am_gen::am_connectionID_t& connectionID, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncDisconnectAsync(const am_gen::am_handle_t& handle, const am_gen::am_connectionID_t& connectionID, AsyncDisconnectAsyncCallback callback);

    virtual void asyncAbort(const am_gen::am_handle_t& handle, CommonAPI::CallStatus& callStatus, am_gen::am_Error_e& error);
    virtual std::future<CommonAPI::CallStatus> asyncAbortAsync(const am_gen::am_handle_t& handle, AsyncAbortAsyncCallback callback);

    virtual void asyncSetSinkSoundProperties(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_SoundProperty_L& listSoundProperties, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSinkSoundPropertiesAsync(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_SoundProperty_L& listSoundProperties, AsyncSetSinkSoundPropertiesAsyncCallback callback);

    virtual void asyncSetSinkSoundProperty(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_SoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSinkSoundPropertyAsync(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_SoundProperty_s& soundProperty, AsyncSetSinkSoundPropertyAsyncCallback callback);

    virtual void asyncSetSourceSoundProperties(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_SoundProperty_L& listSoundProperties, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSourceSoundPropertiesAsync(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_SoundProperty_L& listSoundProperties, AsyncSetSourceSoundPropertiesAsyncCallback callback);

    virtual void asyncSetSourceSoundProperty(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_SoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSourceSoundPropertyAsync(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_SoundProperty_s& soundProperty, AsyncSetSourceSoundPropertyAsyncCallback callback);

    virtual void asyncCrossFade(const am_gen::am_handle_t& handle, const am_gen::am_crossfaderID_t& crossfaderID, const am_gen::am_HotSink_e& hotSink, const am_gen::am_RampType_e& rampType, const am_gen::am_time_t& time, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncCrossFadeAsync(const am_gen::am_handle_t& handle, const am_gen::am_crossfaderID_t& crossfaderID, const am_gen::am_HotSink_e& hotSink, const am_gen::am_RampType_e& rampType, const am_gen::am_time_t& time, AsyncCrossFadeAsyncCallback callback);

    virtual void asyncSetVolumes(const am_gen::am_handle_t& handle, const am_gen::am_Volumes_l& volumes, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetVolumesAsync(const am_gen::am_handle_t& handle, const am_gen::am_Volumes_l& volumes, AsyncSetVolumesAsyncCallback callback);

    virtual void asyncSetSinkNotificationConfiguration(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_NotificationConfiguration_s& notificationConfiguration, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSinkNotificationConfigurationAsync(const am_gen::am_handle_t& handle, const am_gen::am_sinkID_t& sinkID, const am_gen::am_NotificationConfiguration_s& notificationConfiguration, AsyncSetSinkNotificationConfigurationAsyncCallback callback);

    virtual void asyncSetSourceNotificationConfiguration(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_NotificationConfiguration_s& notificationConfiguration, CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> asyncSetSourceNotificationConfigurationAsync(const am_gen::am_handle_t& handle, const am_gen::am_sourceID_t& sourceID, const am_gen::am_NotificationConfiguration_s& notificationConfiguration, AsyncSetSourceNotificationConfigurationAsyncCallback callback);
    
    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:

};

} // namespace audiomanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_AUDIOMANAGER_Routing_Sender_DBUS_PROXY_H_