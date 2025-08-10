#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SetHTMLUnsafeOptions
class SetHTMLUnsafeOptions : public emlite::Val {
  explicit SetHTMLUnsafeOptions(Handle h) noexcept;
public:
    static SetHTMLUnsafeOptions take_ownership(Handle h) noexcept;
    explicit SetHTMLUnsafeOptions(const emlite::Val &val) noexcept;
    SetHTMLUnsafeOptions() noexcept;
    [[nodiscard]] SetHTMLUnsafeOptions clone() const noexcept;
    /// Getter of the `sanitizer` attribute.
    [[nodiscard]] jsbind::Any sanitizer() const;
    /// Setter of the `sanitizer` attribute.
    void sanitizer(const jsbind::Any& value);
};

} // namespace webbind