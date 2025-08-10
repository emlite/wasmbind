#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SummarizerCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SummarizerCreateOptions
/// [`SummarizerCreateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerCreateOptions)
class SummarizerCreateOptions : public SummarizerCreateCoreOptions {
  explicit SummarizerCreateOptions(Handle h) noexcept;
public:
    static SummarizerCreateOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateOptions(const emlite::Val &val) noexcept;
    SummarizerCreateOptions() noexcept;
    [[nodiscard]] SummarizerCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    [[nodiscard]] jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

} // namespace webbind