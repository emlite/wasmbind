#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SetHTMLOptions
/// [`SetHTMLOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SetHTMLOptions)
class SetHTMLOptions : public emlite::Val {
  explicit SetHTMLOptions(Handle h) noexcept;
public:
    static SetHTMLOptions take_ownership(Handle h) noexcept;
    explicit SetHTMLOptions(const emlite::Val &val) noexcept;
    SetHTMLOptions() noexcept;
    [[nodiscard]] SetHTMLOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any sanitizer() const;
    void sanitizer(const jsbind::Any& value);
};

} // namespace webbind