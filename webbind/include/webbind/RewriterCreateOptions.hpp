#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RewriterCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type RewriterCreateOptions
/// [`RewriterCreateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterCreateOptions)
class RewriterCreateOptions : public RewriterCreateCoreOptions {
  explicit RewriterCreateOptions(Handle h) noexcept;
public:
    static RewriterCreateOptions take_ownership(Handle h) noexcept;
    explicit RewriterCreateOptions(const emlite::Val &val) noexcept;
    RewriterCreateOptions() noexcept;
    [[nodiscard]] RewriterCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    [[nodiscard]] jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

} // namespace webbind