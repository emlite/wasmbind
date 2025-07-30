#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class SecurityPolicyViolationEvent : public Event {
    explicit SecurityPolicyViolationEvent(Handle h) noexcept;

public:
    explicit SecurityPolicyViolationEvent(const emlite::Val &val) noexcept;
    static SecurityPolicyViolationEvent take_ownership(Handle h) noexcept;

    SecurityPolicyViolationEvent clone() const noexcept;
    SecurityPolicyViolationEvent(const jsbind::String& type);
    SecurityPolicyViolationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String documentURI() const;
    jsbind::String referrer() const;
    jsbind::String blockedURI() const;
    jsbind::String effectiveDirective() const;
    jsbind::String violatedDirective() const;
    jsbind::String originalPolicy() const;
    jsbind::String sourceFile() const;
    jsbind::String sample() const;
    SecurityPolicyViolationEventDisposition disposition() const;
    unsigned short statusCode() const;
    unsigned long lineNumber() const;
    unsigned long columnNumber() const;
};

