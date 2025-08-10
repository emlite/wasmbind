#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WriterCreateCoreOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type WriterCreateOptions
/// [`WriterCreateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WriterCreateOptions)
class WriterCreateOptions : public WriterCreateCoreOptions {
  explicit WriterCreateOptions(Handle h) noexcept;
public:
    static WriterCreateOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateOptions(const emlite::Val &val) noexcept;
    WriterCreateOptions() noexcept;
    [[nodiscard]] WriterCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    [[nodiscard]] jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

} // namespace webbind