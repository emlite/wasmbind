#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReportingObserverOptions
class ReportingObserverOptions : public emlite::Val {
  explicit ReportingObserverOptions(Handle h) noexcept;
public:
    static ReportingObserverOptions take_ownership(Handle h) noexcept;
    explicit ReportingObserverOptions(const emlite::Val &val) noexcept;
    ReportingObserverOptions() noexcept;
    [[nodiscard]] ReportingObserverOptions clone() const noexcept;
    /// Getter of the `types` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    /// Setter of the `types` attribute.
    void types(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `buffered` attribute.
    [[nodiscard]] bool buffered() const;
    /// Setter of the `buffered` attribute.
    void buffered(bool value);
};

} // namespace webbind