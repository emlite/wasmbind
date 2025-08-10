#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamBYOBReaderReadOptions
/// [`ReadableStreamBYOBReaderReadOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReaderReadOptions)
class ReadableStreamBYOBReaderReadOptions : public emlite::Val {
  explicit ReadableStreamBYOBReaderReadOptions(Handle h) noexcept;
public:
    static ReadableStreamBYOBReaderReadOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamBYOBReaderReadOptions(const emlite::Val &val) noexcept;
    ReadableStreamBYOBReaderReadOptions() noexcept;
    [[nodiscard]] ReadableStreamBYOBReaderReadOptions clone() const noexcept;
    [[nodiscard]] long long min() const;
    void min(long long value);
};

} // namespace webbind