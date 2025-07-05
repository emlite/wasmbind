#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XMLHttpRequestEventTarget.hpp"
#include "enums.hpp"

class XMLHttpRequestUpload;
class Document;
class AttributionReportingRequestOptions;
class PrivateToken;


class AttributionReportingRequestOptions : public emlite::Val {
  explicit AttributionReportingRequestOptions(Handle h) noexcept;
public:
    static AttributionReportingRequestOptions take_ownership(Handle h) noexcept;
    explicit AttributionReportingRequestOptions(const emlite::Val &val) noexcept;
    AttributionReportingRequestOptions() noexcept;
    AttributionReportingRequestOptions clone() const noexcept;
    bool eventSourceEligible() const;
    void eventSourceEligible(bool value);
    bool triggerEligible() const;
    void triggerEligible(bool value);
};

class PrivateToken : public emlite::Val {
  explicit PrivateToken(Handle h) noexcept;
public:
    static PrivateToken take_ownership(Handle h) noexcept;
    explicit PrivateToken(const emlite::Val &val) noexcept;
    PrivateToken() noexcept;
    PrivateToken clone() const noexcept;
    TokenVersion version() const;
    void version(const TokenVersion& value);
    OperationType operation() const;
    void operation(const OperationType& value);
    RefreshPolicy refreshPolicy() const;
    void refreshPolicy(const RefreshPolicy& value);
    jsbind::Sequence<jsbind::USVString> issuers() const;
    void issuers(const jsbind::Sequence<jsbind::USVString>& value);
};

class XMLHttpRequest : public XMLHttpRequestEventTarget {
    explicit XMLHttpRequest(Handle h) noexcept;

public:
    explicit XMLHttpRequest(const emlite::Val &val) noexcept;
    static XMLHttpRequest take_ownership(Handle h) noexcept;

    XMLHttpRequest clone() const noexcept;
    XMLHttpRequest();
    jsbind::Any onreadystatechange() const;
    void onreadystatechange(const jsbind::Any& value);
    unsigned short readyState() const;
    jsbind::Undefined open(const jsbind::ByteString& method, const jsbind::USVString& url, bool async);
    jsbind::Undefined open(const jsbind::ByteString& method, const jsbind::USVString& url, bool async, const jsbind::USVString& username);
    jsbind::Undefined open(const jsbind::ByteString& method, const jsbind::USVString& url, bool async, const jsbind::USVString& username, const jsbind::USVString& password);
    jsbind::Undefined setRequestHeader(const jsbind::ByteString& name, const jsbind::ByteString& value);
    unsigned long timeout() const;
    void timeout(unsigned long value);
    bool withCredentials() const;
    void withCredentials(bool value);
    XMLHttpRequestUpload upload() const;
    jsbind::Undefined send();
    jsbind::Undefined send(const jsbind::Any& body);
    jsbind::Undefined abort();
    jsbind::USVString responseURL() const;
    unsigned short status() const;
    jsbind::ByteString statusText() const;
    jsbind::ByteString getResponseHeader(const jsbind::ByteString& name);
    jsbind::ByteString getAllResponseHeaders();
    jsbind::Undefined overrideMimeType(const jsbind::DOMString& mime);
    XMLHttpRequestResponseType responseType() const;
    void responseType(const XMLHttpRequestResponseType& value);
    jsbind::Any response() const;
    jsbind::USVString responseText() const;
    Document responseXML() const;
    jsbind::Undefined setAttributionReporting(const AttributionReportingRequestOptions& options);
    jsbind::Undefined setPrivateToken(const PrivateToken& privateToken);
};

