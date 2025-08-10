#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type SecurityPolicyViolationEventInit
class SecurityPolicyViolationEventInit : public EventInit {
  explicit SecurityPolicyViolationEventInit(Handle h) noexcept;
public:
    static SecurityPolicyViolationEventInit take_ownership(Handle h) noexcept;
    explicit SecurityPolicyViolationEventInit(const emlite::Val &val) noexcept;
    SecurityPolicyViolationEventInit() noexcept;
    [[nodiscard]] SecurityPolicyViolationEventInit clone() const noexcept;
    /// Getter of the `documentURI` attribute.
    [[nodiscard]] jsbind::String documentURI() const;
    /// Setter of the `documentURI` attribute.
    void documentURI(const jsbind::String& value);
    /// Getter of the `referrer` attribute.
    [[nodiscard]] jsbind::String referrer() const;
    /// Setter of the `referrer` attribute.
    void referrer(const jsbind::String& value);
    /// Getter of the `blockedURI` attribute.
    [[nodiscard]] jsbind::String blockedURI() const;
    /// Setter of the `blockedURI` attribute.
    void blockedURI(const jsbind::String& value);
    /// Getter of the `violatedDirective` attribute.
    [[nodiscard]] jsbind::String violatedDirective() const;
    /// Setter of the `violatedDirective` attribute.
    void violatedDirective(const jsbind::String& value);
    /// Getter of the `effectiveDirective` attribute.
    [[nodiscard]] jsbind::String effectiveDirective() const;
    /// Setter of the `effectiveDirective` attribute.
    void effectiveDirective(const jsbind::String& value);
    /// Getter of the `originalPolicy` attribute.
    [[nodiscard]] jsbind::String originalPolicy() const;
    /// Setter of the `originalPolicy` attribute.
    void originalPolicy(const jsbind::String& value);
    /// Getter of the `sourceFile` attribute.
    [[nodiscard]] jsbind::String sourceFile() const;
    /// Setter of the `sourceFile` attribute.
    void sourceFile(const jsbind::String& value);
    /// Getter of the `sample` attribute.
    [[nodiscard]] jsbind::String sample() const;
    /// Setter of the `sample` attribute.
    void sample(const jsbind::String& value);
    /// Getter of the `disposition` attribute.
    [[nodiscard]] SecurityPolicyViolationEventDisposition disposition() const;
    /// Setter of the `disposition` attribute.
    void disposition(const SecurityPolicyViolationEventDisposition& value);
    /// Getter of the `statusCode` attribute.
    [[nodiscard]] unsigned short statusCode() const;
    /// Setter of the `statusCode` attribute.
    void statusCode(unsigned short value);
    /// Getter of the `lineNumber` attribute.
    [[nodiscard]] unsigned long lineNumber() const;
    /// Setter of the `lineNumber` attribute.
    void lineNumber(unsigned long value);
    /// Getter of the `columnNumber` attribute.
    [[nodiscard]] unsigned long columnNumber() const;
    /// Setter of the `columnNumber` attribute.
    void columnNumber(unsigned long value);
};

} // namespace webbind