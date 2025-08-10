#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type NDEFWriteOptions
/// [`NDEFWriteOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFWriteOptions)
class NDEFWriteOptions : public emlite::Val {
  explicit NDEFWriteOptions(Handle h) noexcept;
public:
    static NDEFWriteOptions take_ownership(Handle h) noexcept;
    explicit NDEFWriteOptions(const emlite::Val &val) noexcept;
    NDEFWriteOptions() noexcept;
    [[nodiscard]] NDEFWriteOptions clone() const noexcept;
    [[nodiscard]] bool overwrite() const;
    void overwrite(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind