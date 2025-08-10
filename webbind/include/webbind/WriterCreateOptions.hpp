#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WriterCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type WriterCreateOptions
class WriterCreateOptions : public WriterCreateCoreOptions {
  explicit WriterCreateOptions(Handle h) noexcept;
public:
    static WriterCreateOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateOptions(const emlite::Val &val) noexcept;
    WriterCreateOptions() noexcept;
    [[nodiscard]] WriterCreateOptions clone() const noexcept;
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