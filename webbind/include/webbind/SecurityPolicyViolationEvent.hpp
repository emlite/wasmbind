#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The SecurityPolicyViolationEvent class.
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
    SecurityPolicyViolationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `documentURI` attribute.
    /// [`SecurityPolicyViolationEvent.documentURI`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/documentURI)
    [[nodiscard]] jsbind::String documentURI() const;
    /// Getter of the `referrer` attribute.
    /// [`SecurityPolicyViolationEvent.referrer`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/referrer)
    [[nodiscard]] jsbind::String referrer() const;
    /// Getter of the `blockedURI` attribute.
    /// [`SecurityPolicyViolationEvent.blockedURI`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/blockedURI)
    [[nodiscard]] jsbind::String blockedURI() const;
    /// Getter of the `effectiveDirective` attribute.
    /// [`SecurityPolicyViolationEvent.effectiveDirective`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/effectiveDirective)
    [[nodiscard]] jsbind::String effectiveDirective() const;
    /// Getter of the `violatedDirective` attribute.
    /// [`SecurityPolicyViolationEvent.violatedDirective`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/violatedDirective)
    [[nodiscard]] jsbind::String violatedDirective() const;
    /// Getter of the `originalPolicy` attribute.
    /// [`SecurityPolicyViolationEvent.originalPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/originalPolicy)
    [[nodiscard]] jsbind::String originalPolicy() const;
    /// Getter of the `sourceFile` attribute.
    /// [`SecurityPolicyViolationEvent.sourceFile`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/sourceFile)
    [[nodiscard]] jsbind::String sourceFile() const;
    /// Getter of the `sample` attribute.
    /// [`SecurityPolicyViolationEvent.sample`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/sample)
    [[nodiscard]] jsbind::String sample() const;
    /// Getter of the `disposition` attribute.
    /// [`SecurityPolicyViolationEvent.disposition`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/disposition)
    [[nodiscard]] SecurityPolicyViolationEventDisposition disposition() const;
    /// Getter of the `statusCode` attribute.
    /// [`SecurityPolicyViolationEvent.statusCode`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/statusCode)
    [[nodiscard]] unsigned short statusCode() const;
    /// Getter of the `lineNumber` attribute.
    /// [`SecurityPolicyViolationEvent.lineNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/lineNumber)
    [[nodiscard]] unsigned long lineNumber() const;
    /// Getter of the `columnNumber` attribute.
    /// [`SecurityPolicyViolationEvent.columnNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEvent/columnNumber)
    [[nodiscard]] unsigned long columnNumber() const;
};

