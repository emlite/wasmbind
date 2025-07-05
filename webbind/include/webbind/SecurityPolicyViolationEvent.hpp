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
    SecurityPolicyViolationEvent(const jsbind::DOMString& type);
    SecurityPolicyViolationEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::USVString documentURI() const;
    jsbind::USVString referrer() const;
    jsbind::USVString blockedURI() const;
    jsbind::DOMString effectiveDirective() const;
    jsbind::DOMString violatedDirective() const;
    jsbind::DOMString originalPolicy() const;
    jsbind::USVString sourceFile() const;
    jsbind::DOMString sample() const;
    SecurityPolicyViolationEventDisposition disposition() const;
    unsigned short statusCode() const;
    unsigned long lineNumber() const;
    unsigned long columnNumber() const;
};

