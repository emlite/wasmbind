#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingHints
/// [`HandwritingHints`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingHints)
class HandwritingHints : public emlite::Val {
  explicit HandwritingHints(Handle h) noexcept;
public:
    static HandwritingHints take_ownership(Handle h) noexcept;
    explicit HandwritingHints(const emlite::Val &val) noexcept;
    HandwritingHints() noexcept;
    [[nodiscard]] HandwritingHints clone() const noexcept;
    [[nodiscard]] jsbind::String recognitionType() const;
    void recognitionType(const jsbind::String& value);
    [[nodiscard]] jsbind::String inputType() const;
    void inputType(const jsbind::String& value);
    [[nodiscard]] jsbind::String textContext() const;
    void textContext(const jsbind::String& value);
    [[nodiscard]] unsigned long alternatives() const;
    void alternatives(unsigned long value);
};

} // namespace webbind