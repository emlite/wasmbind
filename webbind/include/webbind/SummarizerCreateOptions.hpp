#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SummarizerCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SummarizerCreateOptions
class SummarizerCreateOptions : public SummarizerCreateCoreOptions {
  explicit SummarizerCreateOptions(Handle h) noexcept;
public:
    static SummarizerCreateOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateOptions(const emlite::Val &val) noexcept;
    SummarizerCreateOptions() noexcept;
    [[nodiscard]] SummarizerCreateOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
    /// Getter of the `monitor` attribute.
    [[nodiscard]] jsbind::Function monitor() const;
    /// Setter of the `monitor` attribute.
    void monitor(const jsbind::Function& value);
    /// Getter of the `sharedContext` attribute.
    [[nodiscard]] jsbind::String sharedContext() const;
    /// Setter of the `sharedContext` attribute.
    void sharedContext(const jsbind::String& value);
};

} // namespace webbind