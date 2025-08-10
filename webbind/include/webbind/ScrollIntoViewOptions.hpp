#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ScrollOptions.hpp"

namespace webbind {

/// Dictionary type ScrollIntoViewOptions
class ScrollIntoViewOptions : public ScrollOptions {
  explicit ScrollIntoViewOptions(Handle h) noexcept;
public:
    static ScrollIntoViewOptions take_ownership(Handle h) noexcept;
    explicit ScrollIntoViewOptions(const emlite::Val &val) noexcept;
    ScrollIntoViewOptions() noexcept;
    [[nodiscard]] ScrollIntoViewOptions clone() const noexcept;
    /// Getter of the `block` attribute.
    [[nodiscard]] ScrollLogicalPosition block() const;
    /// Setter of the `block` attribute.
    void block(const ScrollLogicalPosition& value);
    /// Getter of the `inline` attribute.
    [[nodiscard]] ScrollLogicalPosition inline_() const;
    /// Setter of the `inline` attribute.
    void inline_(const ScrollLogicalPosition& value);
    /// Getter of the `container` attribute.
    [[nodiscard]] ScrollIntoViewContainer container() const;
    /// Setter of the `container` attribute.
    void container(const ScrollIntoViewContainer& value);
};

} // namespace webbind