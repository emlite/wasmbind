#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SetHTMLUnsafeOptions
/// [`SetHTMLUnsafeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SetHTMLUnsafeOptions)
class SetHTMLUnsafeOptions : public emlite::Val {
  explicit SetHTMLUnsafeOptions(Handle h) noexcept;
public:
    static SetHTMLUnsafeOptions take_ownership(Handle h) noexcept;
    explicit SetHTMLUnsafeOptions(const emlite::Val &val) noexcept;
    SetHTMLUnsafeOptions() noexcept;
    [[nodiscard]] SetHTMLUnsafeOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any sanitizer() const;
    void sanitizer(const jsbind::Any& value);
};

} // namespace webbind