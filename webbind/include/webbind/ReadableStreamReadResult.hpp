#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamReadResult
/// [`ReadableStreamReadResult`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamReadResult)
class ReadableStreamReadResult : public emlite::Val {
  explicit ReadableStreamReadResult(Handle h) noexcept;
public:
    static ReadableStreamReadResult take_ownership(Handle h) noexcept;
    explicit ReadableStreamReadResult(const emlite::Val &val) noexcept;
    ReadableStreamReadResult() noexcept;
    [[nodiscard]] ReadableStreamReadResult clone() const noexcept;
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
    [[nodiscard]] bool done() const;
    void done(bool value);
};

} // namespace webbind