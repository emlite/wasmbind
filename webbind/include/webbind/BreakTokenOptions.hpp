#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ChildBreakToken;

/// Dictionary type BreakTokenOptions
class BreakTokenOptions : public emlite::Val {
  explicit BreakTokenOptions(Handle h) noexcept;
public:
    static BreakTokenOptions take_ownership(Handle h) noexcept;
    explicit BreakTokenOptions(const emlite::Val &val) noexcept;
    BreakTokenOptions() noexcept;
    [[nodiscard]] BreakTokenOptions clone() const noexcept;
    /// Getter of the `childBreakTokens` attribute.
    [[nodiscard]] jsbind::TypedArray<ChildBreakToken> childBreakTokens() const;
    /// Setter of the `childBreakTokens` attribute.
    void childBreakTokens(const jsbind::TypedArray<ChildBreakToken>& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
};

} // namespace webbind