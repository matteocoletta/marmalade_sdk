/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */

#include "s3eExt.h"
#include "IwDebug.h"
#include "s3eDevice.h"


#include "AdjustMarmalade.h"


// Define S3E_EXT_SKIP_LOADER_CALL_LOCK on the user-side to skip LoaderCallStart/LoaderCallDone()-entry.
// e.g. in s3eNUI this is used for generic user-side IwUI-based implementation.
#ifndef S3E_EXT_SKIP_LOADER_CALL_LOCK
#if (defined(WINAPI_FAMILY) && (WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP)) || defined I3D_ARCH_NACLX86_64
// For platforms missing stack-switching (WP8, NaCl, etc.) make loader-entry via LoaderCallStart/LoaderCallDone() on the user-side.
#define LOADER_CALL_LOCK
#endif
#endif


#include "AdjustMarmalade_interface.h"

static AdjustMarmaladeFuncs g_Ext;
static bool g_GotExt = false;
static bool g_TriedExt = false;
static bool g_TriedNoMsgExt = false;

static bool _extLoad()
{
    if (!g_GotExt && !g_TriedExt)
    {
        s3eResult res = s3eExtGetHash(0x1066434, &g_Ext, sizeof(g_Ext));
        if (res == S3E_RESULT_SUCCESS)
            g_GotExt = true;
        else
            s3eDebugAssertShow(S3E_MESSAGE_CONTINUE_STOP_IGNORE,                 "error loading extension: AdjustMarmalade");

        g_TriedExt = true;
        g_TriedNoMsgExt = true;
    }

    return g_GotExt;
}

static bool _extLoadNoMsg()
{
    if (!g_GotExt && !g_TriedNoMsgExt)
    {
        s3eResult res = s3eExtGetHash(0x1066434, &g_Ext, sizeof(g_Ext));
        if (res == S3E_RESULT_SUCCESS)
            g_GotExt = true;
        g_TriedNoMsgExt = true;
        if (g_TriedExt)
            g_TriedExt = true;
    }

    return g_GotExt;
}

s3eBool AdjustMarmaladeAvailable()
{
    _extLoadNoMsg();
    return g_GotExt ? S3E_TRUE : S3E_FALSE;
}

s3eResult adjust_Start(adjust_config* config)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_Start);
#endif

    s3eResult ret = g_Ext.m_adjust_Start(config);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_Start);
#endif

    return ret;
}

s3eResult adjust_TrackEvent(adjust_event* event)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_TrackEvent);
#endif

    s3eResult ret = g_Ext.m_adjust_TrackEvent(event);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_TrackEvent);
#endif

    return ret;
}

s3eResult adjust_SetEnabled(bool is_enabled)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_SetEnabled);
#endif

    s3eResult ret = g_Ext.m_adjust_SetEnabled(is_enabled);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_SetEnabled);
#endif

    return ret;
}

s3eResult adjust_IsEnabled(bool& is_enabled_out)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_IsEnabled);
#endif

    s3eResult ret = g_Ext.m_adjust_IsEnabled(is_enabled_out);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_IsEnabled);
#endif

    return ret;
}

s3eResult adjust_SetOfflineMode(bool is_offline_mode_enabled)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_SetOfflineMode);
#endif

    s3eResult ret = g_Ext.m_adjust_SetOfflineMode(is_offline_mode_enabled);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_SetOfflineMode);
#endif

    return ret;
}

s3eResult adjust_SetReferrer(const char* referrer)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_SetReferrer);
#endif

    s3eResult ret = g_Ext.m_adjust_SetReferrer(referrer);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_SetReferrer);
#endif

    return ret;
}

s3eResult adjust_SetDeviceToken(const char* device_token)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_SetDeviceToken);
#endif

    s3eResult ret = g_Ext.m_adjust_SetDeviceToken(device_token);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_SetDeviceToken);
#endif

    return ret;
}

s3eResult adjust_SendFirstPackages()
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_SendFirstPackages);
#endif

    s3eResult ret = g_Ext.m_adjust_SendFirstPackages();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_SendFirstPackages);
#endif

    return ret;
}

s3eResult adjust_AddSessionCallbackParameter(const char* key, const char* value)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_AddSessionCallbackParameter);
#endif

    s3eResult ret = g_Ext.m_adjust_AddSessionCallbackParameter(key, value);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_AddSessionCallbackParameter);
#endif

    return ret;
}

s3eResult adjust_AddSessionPartnerParameter(const char* key, const char* value)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_AddSessionPartnerParameter);
#endif

    s3eResult ret = g_Ext.m_adjust_AddSessionPartnerParameter(key, value);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_AddSessionPartnerParameter);
#endif

    return ret;
}

s3eResult adjust_RemoveSessionCallbackParameter(const char* key)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_RemoveSessionCallbackParameter);
#endif

    s3eResult ret = g_Ext.m_adjust_RemoveSessionCallbackParameter(key);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_RemoveSessionCallbackParameter);
#endif

    return ret;
}

s3eResult adjust_RemoveSessionPartnerParameter(const char* key)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_RemoveSessionPartnerParameter);
#endif

    s3eResult ret = g_Ext.m_adjust_RemoveSessionPartnerParameter(key);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_RemoveSessionPartnerParameter);
#endif

    return ret;
}

s3eResult adjust_ResetSessionCallbackParameters()
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_ResetSessionCallbackParameters);
#endif

    s3eResult ret = g_Ext.m_adjust_ResetSessionCallbackParameters();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_ResetSessionCallbackParameters);
#endif

    return ret;
}

s3eResult adjust_ResetSessionPartnerParameters()
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_ResetSessionPartnerParameters);
#endif

    s3eResult ret = g_Ext.m_adjust_ResetSessionPartnerParameters();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_ResetSessionPartnerParameters);
#endif

    return ret;
}

s3eResult adjust_GdprForgetMe()
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_GdprForgetMe);
#endif

    s3eResult ret = g_Ext.m_adjust_GdprForgetMe();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_GdprForgetMe);
#endif

    return ret;
}

s3eResult adjust_GetGoogleAdId()
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_GetGoogleAdId);
#endif

    s3eResult ret = g_Ext.m_adjust_GetGoogleAdId();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_GetGoogleAdId);
#endif

    return ret;
}

s3eResult adjust_GetIdfa()
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_GetIdfa);
#endif

    s3eResult ret = g_Ext.m_adjust_GetIdfa();

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_GetIdfa);
#endif

    return ret;
}

s3eResult adjust_GetAdid(char** adid)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_GetAdid);
#endif

    s3eResult ret = g_Ext.m_adjust_GetAdid(adid);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_GetAdid);
#endif

    return ret;
}

s3eResult adjust_GetAttribution(adjust_attribution_data* attribution)
{
    if (!_extLoad())
        return S3E_RESULT_ERROR;

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallStart(S3E_TRUE, (void*)g_Ext.m_adjust_GetAttribution);
#endif

    s3eResult ret = g_Ext.m_adjust_GetAttribution(attribution);

#ifdef LOADER_CALL_LOCK
    s3eDeviceLoaderCallDone(S3E_TRUE, (void*)g_Ext.m_adjust_GetAttribution);
#endif

    return ret;
}
