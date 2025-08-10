#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "enums.hpp"

namespace webbind {

class SecurityPolicyViolationEventInit;

/// Interface SecurityPolicyViolationEvent
/// [`SecurityPolicyViolationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent)
class SecurityPolicyViolationEvent : public Event {
    explicit SecurityPolicyViolationEvent(Handle h) noexcept;
public:
    explicit SecurityPolicyViolationEvent(const emlite::Val &val) noexcept;
    static SecurityPolicyViolationEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SecurityPolicyViolationEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SecurityPolicyViolationEvent(..)` constructor, creating a new SecurityPolicyViolationEvent instance
    SecurityPolicyViolationEvent(const jsbind::String& type);
    /// The `new SecurityPolicyViolationEvent(..)` constructor, creating a new SecurityPolicyViolationEvent instance
    SecurityPolicyViolationEvent(const jsbind::String& type, const SecurityPolicyViolationEventInit& eventInitDict);
    /// [`SecurityPolicyViolationEvent.documentURI`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/documentURI)
    /// [`SecurityPolicyViolationEvent.documentURI`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/documentURI)
    [[nodiscard]] jsbind::String documentURI() const;
    /// [`SecurityPolicyViolationEvent.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/referrer)
    /// [`SecurityPolicyViolationEvent.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/referrer)
    [[nodiscard]] jsbind::String referrer() const;
    /// [`SecurityPolicyViolationEvent.blockedURI`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/blockedURI)
    /// [`SecurityPolicyViolationEvent.blockedURI`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/blockedURI)
    [[nodiscard]] jsbind::String blockedURI() const;
    /// [`SecurityPolicyViolationEvent.effectiveDirective`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/effectiveDirective)
    /// [`SecurityPolicyViolationEvent.effectiveDirective`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/effectiveDirective)
    [[nodiscard]] jsbind::String effectiveDirective() const;
    /// [`SecurityPolicyViolationEvent.violatedDirective`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/violatedDirective)
    /// [`SecurityPolicyViolationEvent.violatedDirective`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/violatedDirective)
    [[nodiscard]] jsbind::String violatedDirective() const;
    /// [`SecurityPolicyViolationEvent.originalPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/originalPolicy)
    /// [`SecurityPolicyViolationEvent.originalPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/originalPolicy)
    [[nodiscard]] jsbind::String originalPolicy() const;
    /// [`SecurityPolicyViolationEvent.sourceFile`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/sourceFile)
    /// [`SecurityPolicyViolationEvent.sourceFile`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/sourceFile)
    [[nodiscard]] jsbind::String sourceFile() const;
    /// [`SecurityPolicyViolationEvent.sample`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/sample)
    /// [`SecurityPolicyViolationEvent.sample`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/sample)
    [[nodiscard]] jsbind::String sample() const;
    /// [`SecurityPolicyViolationEvent.disposition`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/disposition)
    /// [`SecurityPolicyViolationEvent.disposition`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/disposition)
    [[nodiscard]] SecurityPolicyViolationEventDisposition disposition() const;
    /// [`SecurityPolicyViolationEvent.statusCode`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/statusCode)
    /// [`SecurityPolicyViolationEvent.statusCode`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/statusCode)
    [[nodiscard]] unsigned short statusCode() const;
    /// [`SecurityPolicyViolationEvent.lineNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/lineNumber)
    /// [`SecurityPolicyViolationEvent.lineNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/lineNumber)
    [[nodiscard]] unsigned long lineNumber() const;
    /// [`SecurityPolicyViolationEvent.columnNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/columnNumber)
    /// [`SecurityPolicyViolationEvent.columnNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/columnNumber)
    [[nodiscard]] unsigned long columnNumber() const;
};

} // namespace webbind