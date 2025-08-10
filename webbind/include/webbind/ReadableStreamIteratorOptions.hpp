#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamIteratorOptions
/// [`ReadableStreamIteratorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamIteratorOptions)
class ReadableStreamIteratorOptions : public emlite::Val {
  explicit ReadableStreamIteratorOptions(Handle h) noexcept;
public:
    static ReadableStreamIteratorOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamIteratorOptions(const emlite::Val &val) noexcept;
    ReadableStreamIteratorOptions() noexcept;
    [[nodiscard]] ReadableStreamIteratorOptions clone() const noexcept;
    [[nodiscard]] bool preventCancel() const;
    void preventCancel(bool value);
};

} // namespace webbind