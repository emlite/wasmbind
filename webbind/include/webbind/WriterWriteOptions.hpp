#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type WriterWriteOptions
/// [`WriterWriteOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WriterWriteOptions)
class WriterWriteOptions : public emlite::Val {
  explicit WriterWriteOptions(Handle h) noexcept;
public:
    static WriterWriteOptions take_ownership(Handle h) noexcept;
    explicit WriterWriteOptions(const emlite::Val &val) noexcept;
    WriterWriteOptions() noexcept;
    [[nodiscard]] WriterWriteOptions clone() const noexcept;
    [[nodiscard]] jsbind::String context() const;
    void context(const jsbind::String& value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind