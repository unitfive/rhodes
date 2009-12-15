#pragma once

#include "common/RhoStd.h"

namespace rho {
namespace sync {

struct ISyncProtocol
{
    virtual const String& getContentType() = 0;
    virtual int getVersion() = 0;

    virtual String getLoginUrl() = 0;
    virtual String getLoginBody( const String& name, const String& password)=0;
    virtual String getClientCreateUrl() = 0;

    virtual String getClientRegisterUrl() = 0;
    virtual String getClientRegisterBody( const String& strClientID, const String& strPin, int nPort, const String& strType ) = 0;

    virtual String getClientResetUrl(const String& strClientID) = 0;
    virtual String getClientChangesUrl(const String& strSrcName, const String& strUpdateType, const String& strClientID) = 0;

    virtual String getServerQueryUrl(const String& strSrcName, const String& strAction, const String& strAskParams) = 0;

};

}
}