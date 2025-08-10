#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BoxQuadOptions
class BoxQuadOptions : public emlite::Val {
  explicit BoxQuadOptions(Handle h) noexcept;
public:
    static BoxQuadOptions take_ownership(Handle h) noexcept;
    explicit BoxQuadOptions(const emlite::Val &val) noexcept;
    BoxQuadOptions() noexcept;
    [[nodiscard]] BoxQuadOptions clone() const noexcept;
    /// Getter of the `box` attribute.
    [[nodiscard]] CSSBoxType box() const;
    /// Setter of the `box` attribute.
    void box(const CSSBoxType& value);
    /// Getter of the `relativeTo` attribute.
    [[nodiscard]] jsbind::Any relativeTo() const;
    /// Setter of the `relativeTo` attribute.
    void relativeTo(const jsbind::Any& value);
};

} // namespace webbind