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
    [[nodiscard]] AttributionReportingRequestOptions clone() const noexcept;
    [[nodiscard]] bool eventSourceEligible() const;
    void eventSourceEligible(bool value);
    [[nodiscard]] bool triggerEligible() const;
    void triggerEligible(bool value);
};

class PrivateToken : public emlite::Val {
  explicit PrivateToken(Handle h) noexcept;
public:
    static PrivateToken take_ownership(Handle h) noexcept;
    explicit PrivateToken(const emlite::Val &val) noexcept;
    PrivateToken() noexcept;
    [[nodiscard]] PrivateToken clone() const noexcept;
    [[nodiscard]] TokenVersion version() const;
    void version(const TokenVersion& value);
    [[nodiscard]] OperationType operation() const;
    void operation(const OperationType& value);
    [[nodiscard]] RefreshPolicy refreshPolicy() const;
    void refreshPolicy(const RefreshPolicy& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> issuers() const;
    void issuers(const jsbind::TypedArray<jsbind::String>& value);
};

/// The XMLHttpRequest class.
/// [`XMLHttpRequest`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest)
class XMLHttpRequest : public XMLHttpRequestEventTarget {
    explicit XMLHttpRequest(Handle h) noexcept;

public:
    explicit XMLHttpRequest(const emlite::Val &val) noexcept;
    static XMLHttpRequest take_ownership(Handle h) noexcept;

    [[nodiscard]] XMLHttpRequest clone() const noexcept;
    /// The `new XMLHttpRequest(..)` constructor, creating a new XMLHttpRequest instance
    XMLHttpRequest();
    /// Getter of the `onreadystatechange` attribute.
    /// [`XMLHttpRequest.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/onreadystatechange)
    [[nodiscard]] jsbind::Any onreadystatechange() const;
    /// Setter of the `onreadystatechange` attribute.
    /// [`XMLHttpRequest.onreadystatechange`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/onreadystatechange)
    void onreadystatechange(const jsbind::Any& value);
    /// Getter of the `readyState` attribute.
    /// [`XMLHttpRequest.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/readyState)
    [[nodiscard]] unsigned short readyState() const;
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
    /// Getter of the `timeout` attribute.
    /// [`XMLHttpRequest.timeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/timeout)
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    /// [`XMLHttpRequest.timeout`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/timeout)
    void timeout(unsigned long value);
    /// Getter of the `withCredentials` attribute.
    /// [`XMLHttpRequest.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/withCredentials)
    [[nodiscard]] bool withCredentials() const;
    /// Setter of the `withCredentials` attribute.
    /// [`XMLHttpRequest.withCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/withCredentials)
    void withCredentials(bool value);
    /// Getter of the `upload` attribute.
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
    /// Getter of the `responseURL` attribute.
    /// [`XMLHttpRequest.responseURL`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseURL)
    [[nodiscard]] jsbind::String responseURL() const;
    /// Getter of the `status` attribute.
    /// [`XMLHttpRequest.status`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/status)
    [[nodiscard]] unsigned short status() const;
    /// Getter of the `statusText` attribute.
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
    /// Getter of the `responseType` attribute.
    /// [`XMLHttpRequest.responseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseType)
    [[nodiscard]] XMLHttpRequestResponseType responseType() const;
    /// Setter of the `responseType` attribute.
    /// [`XMLHttpRequest.responseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseType)
    void responseType(const XMLHttpRequestResponseType& value);
    /// Getter of the `response` attribute.
    /// [`XMLHttpRequest.response`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/response)
    [[nodiscard]] jsbind::Any response() const;
    /// Getter of the `responseText` attribute.
    /// [`XMLHttpRequest.responseText`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseText)
    [[nodiscard]] jsbind::String responseText() const;
    /// Getter of the `responseXML` attribute.
    /// [`XMLHttpRequest.responseXML`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/responseXML)
    [[nodiscard]] Document responseXML() const;
    /// The setAttributionReporting method.
    /// [`XMLHttpRequest.setAttributionReporting`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/setAttributionReporting)
    jsbind::Undefined setAttributionReporting(const AttributionReportingRequestOptions& options);
    /// The setPrivateToken method.
    /// [`XMLHttpRequest.setPrivateToken`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/setPrivateToken)
    jsbind::Undefined setPrivateToken(const PrivateToken& privateToken);
};

