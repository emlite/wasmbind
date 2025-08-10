#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConvertCoordinateOptions
class ConvertCoordinateOptions : public emlite::Val {
  explicit ConvertCoordinateOptions(Handle h) noexcept;
public:
    static ConvertCoordinateOptions take_ownership(Handle h) noexcept;
    explicit ConvertCoordinateOptions(const emlite::Val &val) noexcept;
    ConvertCoordinateOptions() noexcept;
    [[nodiscard]] ConvertCoordinateOptions clone() const noexcept;
    /// Getter of the `fromBox` attribute.
    [[nodiscard]] CSSBoxType fromBox() const;
    /// Setter of the `fromBox` attribute.
    void fromBox(const CSSBoxType& value);
    /// Getter of the `toBox` attribute.
    [[nodiscard]] CSSBoxType toBox() const;
    /// Setter of the `toBox` attribute.
    void toBox(const CSSBoxType& value);
};

} // namespace webbind