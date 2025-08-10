#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type InkPresenterParam
class InkPresenterParam : public emlite::Val {
  explicit InkPresenterParam(Handle h) noexcept;
public:
    static InkPresenterParam take_ownership(Handle h) noexcept;
    explicit InkPresenterParam(const emlite::Val &val) noexcept;
    InkPresenterParam() noexcept;
    [[nodiscard]] InkPresenterParam clone() const noexcept;
    /// Getter of the `presentationArea` attribute.
    [[nodiscard]] Element presentationArea() const;
    /// Setter of the `presentationArea` attribute.
    void presentationArea(const Element& value);
};

} // namespace webbind