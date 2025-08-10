#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type SecurityPolicyViolationEventInit
/// [`SecurityPolicyViolationEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEventInit)
class SecurityPolicyViolationEventInit : public EventInit {
  explicit SecurityPolicyViolationEventInit(Handle h) noexcept;
public:
    static SecurityPolicyViolationEventInit take_ownership(Handle h) noexcept;
    explicit SecurityPolicyViolationEventInit(const emlite::Val &val) noexcept;
    SecurityPolicyViolationEventInit() noexcept;
    [[nodiscard]] SecurityPolicyViolationEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String documentURI() const;
    void documentURI(const jsbind::String& value);
    [[nodiscard]] jsbind::String referrer() const;
    void referrer(const jsbind::String& value);
    [[nodiscard]] jsbind::String blockedURI() const;
    void blockedURI(const jsbind::String& value);
    [[nodiscard]] jsbind::String violatedDirective() const;
    void violatedDirective(const jsbind::String& value);
    [[nodiscard]] jsbind::String effectiveDirective() const;
    void effectiveDirective(const jsbind::String& value);
    [[nodiscard]] jsbind::String originalPolicy() const;
    void originalPolicy(const jsbind::String& value);
    [[nodiscard]] jsbind::String sourceFile() const;
    void sourceFile(const jsbind::String& value);
    [[nodiscard]] jsbind::String sample() const;
    void sample(const jsbind::String& value);
    [[nodiscard]] SecurityPolicyViolationEventDisposition disposition() const;
    void disposition(const SecurityPolicyViolationEventDisposition& value);
    [[nodiscard]] unsigned short statusCode() const;
    void statusCode(unsigned short value);
    [[nodiscard]] unsigned long lineNumber() const;
    void lineNumber(unsigned long value);
    [[nodiscard]] unsigned long columnNumber() const;
    void columnNumber(unsigned long value);
};

} // namespace webbind