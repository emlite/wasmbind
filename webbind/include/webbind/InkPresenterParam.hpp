#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;

/// Dictionary type InkPresenterParam
/// [`InkPresenterParam`](https://developer.mozilla.org/en-US/docs/Web/API/InkPresenterParam)
class InkPresenterParam : public emlite::Val {
  explicit InkPresenterParam(Handle h) noexcept;
public:
    static InkPresenterParam take_ownership(Handle h) noexcept;
    explicit InkPresenterParam(const emlite::Val &val) noexcept;
    InkPresenterParam() noexcept;
    [[nodiscard]] InkPresenterParam clone() const noexcept;
    [[nodiscard]] Element presentationArea() const;
    void presentationArea(const Element& value);
};

} // namespace webbind