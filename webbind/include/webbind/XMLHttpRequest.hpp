#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XMLHttpRequestEventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class XMLHttpRequestUpload;
class Document;
class AttributionReportingRequestOptions;
class PrivateToken;

/// Interface XMLHttpRequest
/// [`XMLHttpRequest`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest)
class XMLHttpRequest : public XMLHttpRequestEventTarget {
    explicit XMLHttpRequest(Handle h) noexcept;
public:
    explicit XMLHttpRequest(const emlite::Val &val) noexcept;
    static XMLHttpRequest take_ownership(Handle h) noexcept;
    [[nodiscard]] XMLHttpRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XMLHttpRequest(..)` constructor, creating a new XMLHttpRequest instance
    XMLHttpRequest();
    /// [`XMLHttpRequest.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/onreadystatechange)
    /// [`XMLHttpRequest.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/onreadystatechange)
    [[nodiscard]] jsbind::Any onreadystatechange() const;
    /// Setter of the `onreadystatechange` attribute.
    /// [`XMLHttpRequest.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/onreadystatechange)
    void onreadystatechange(const jsbind::Any& value);
    /// [`XMLHttpRequest.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/readyState)
    /// [`XMLHttpRequest.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// The open method.
    /// [`XMLHttpRequest.open`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/open)
    jsbind::Undefined open(const jsbind::String& method, const jsbind::String& url);
    /// The open method.
    /// [`XMLHttpRequest.open`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/open)
    jsbind::Undefined open(const jsbind::String& method, const jsbind::String& url, bool async);
    /// The open method.
    /// [`XMLHttpRequest.open`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/open)
    jsbind::Undefined open(const jsbind::String& method, const jsbind::String& url, bool async, const jsbind::String& username);
    /// The open method.
    /// [`XMLHttpRequest.open`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/open)
    jsbind::Undefined open(const jsbind::String& method, const jsbind::String& url, bool async, const jsbind::String& username, const jsbind::String& password);
    /// The setRequestHeader method.
    /// [`XMLHttpRequest.setRequestHeader`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/setRequestHeader)
    jsbind::Undefined setRequestHeader(const jsbind::String& name, const jsbind::String& value);
    /// [`XMLHttpRequest.timeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/timeout)
    /// [`XMLHttpRequest.timeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/timeout)
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    /// [`XMLHttpRequest.timeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/timeout)
    void timeout(unsigned long value);
    /// [`XMLHttpRequest.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/withCredentials)
    /// [`XMLHttpRequest.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/withCredentials)
    [[nodiscard]] bool withCredentials() const;
    /// Setter of the `withCredentials` attribute.
    /// [`XMLHttpRequest.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/withCredentials)
    void withCredentials(bool value);
    /// [`XMLHttpRequest.upload`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/upload)
    /// [`XMLHttpRequest.upload`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/upload)
    [[nodiscard]] XMLHttpRequestUpload upload() const;
    /// The send method.
    /// [`XMLHttpRequest.send`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/send)
    jsbind::Undefined send();
    /// The send method.
    /// [`XMLHttpRequest.send`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/send)
    jsbind::Undefined send(const jsbind::Any& body);
    /// The abort method.
    /// [`XMLHttpRequest.abort`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/abort)
    jsbind::Undefined abort();
    /// [`XMLHttpRequest.responseURL`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseURL)
    /// [`XMLHttpRequest.responseURL`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseURL)
    [[nodiscard]] jsbind::String responseURL() const;
    /// [`XMLHttpRequest.status`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/status)
    /// [`XMLHttpRequest.status`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/status)
    [[nodiscard]] unsigned short status() const;
    /// [`XMLHttpRequest.statusText`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/statusText)
    /// [`XMLHttpRequest.statusText`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/statusText)
    [[nodiscard]] jsbind::String statusText() const;
    /// The getResponseHeader method.
    /// [`XMLHttpRequest.getResponseHeader`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/getResponseHeader)
    jsbind::String getResponseHeader(const jsbind::String& name);
    /// The getAllResponseHeaders method.
    /// [`XMLHttpRequest.getAllResponseHeaders`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/getAllResponseHeaders)
    jsbind::String getAllResponseHeaders();
    /// The overrideMimeType method.
    /// [`XMLHttpRequest.overrideMimeType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/overrideMimeType)
    jsbind::Undefined overrideMimeType(const jsbind::String& mime);
    /// [`XMLHttpRequest.responseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseType)
    /// [`XMLHttpRequest.responseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseType)
    [[nodiscard]] XMLHttpRequestResponseType responseType() const;
    /// Setter of the `responseType` attribute.
    /// [`XMLHttpRequest.responseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseType)
    void responseType(const XMLHttpRequestResponseType& value);
    /// [`XMLHttpRequest.response`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/response)
    /// [`XMLHttpRequest.response`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/response)
    [[nodiscard]] jsbind::Any response() const;
    /// [`XMLHttpRequest.responseText`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseText)
    /// [`XMLHttpRequest.responseText`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseText)
    [[nodiscard]] jsbind::String responseText() const;
    /// [`XMLHttpRequest.responseXML`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseXML)
    /// [`XMLHttpRequest.responseXML`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseXML)
    [[nodiscard]] Document responseXML() const;
    /// The setAttributionReporting method.
    /// [`XMLHttpRequest.setAttributionReporting`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/setAttributionReporting)
    jsbind::Undefined setAttributionReporting(const AttributionReportingRequestOptions& options);
    /// The setPrivateToken method.
    /// [`XMLHttpRequest.setPrivateToken`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/setPrivateToken)
    jsbind::Undefined setPrivateToken(const PrivateToken& privateToken);
};

} // namespace webbind