#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingHints
class HandwritingHints : public emlite::Val {
  explicit HandwritingHints(Handle h) noexcept;
public:
    static HandwritingHints take_ownership(Handle h) noexcept;
    explicit HandwritingHints(const emlite::Val &val) noexcept;
    HandwritingHints() noexcept;
    [[nodiscard]] HandwritingHints clone() const noexcept;
    /// Getter of the `recognitionType` attribute.
    [[nodiscard]] jsbind::String recognitionType() const;
    /// Setter of the `recognitionType` attribute.
    void recognitionType(const jsbind::String& value);
    /// Getter of the `inputType` attribute.
    [[nodiscard]] jsbind::String inputType() const;
    /// Setter of the `inputType` attribute.
    void inputType(const jsbind::String& value);
    /// Getter of the `textContext` attribute.
    [[nodiscard]] jsbind::String textContext() const;
    /// Setter of the `textContext` attribute.
    void textContext(const jsbind::String& value);
    /// Getter of the `alternatives` attribute.
    [[nodiscard]] unsigned long alternatives() const;
    /// Setter of the `alternatives` attribute.
    void alternatives(unsigned long value);
};

} // namespace webbind