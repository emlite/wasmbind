#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReportingObserverOptions
/// [`ReportingObserverOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ReportingObserverOptions)
class ReportingObserverOptions : public emlite::Val {
  explicit ReportingObserverOptions(Handle h) noexcept;
public:
    static ReportingObserverOptions take_ownership(Handle h) noexcept;
    explicit ReportingObserverOptions(const emlite::Val &val) noexcept;
    ReportingObserverOptions() noexcept;
    [[nodiscard]] ReportingObserverOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    void types(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] bool buffered() const;
    void buffered(bool value);
};

} // namespace webbind