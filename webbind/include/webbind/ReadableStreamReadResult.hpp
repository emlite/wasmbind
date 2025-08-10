#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamReadResult
class ReadableStreamReadResult : public emlite::Val {
  explicit ReadableStreamReadResult(Handle h) noexcept;
public:
    static ReadableStreamReadResult take_ownership(Handle h) noexcept;
    explicit ReadableStreamReadResult(const emlite::Val &val) noexcept;
    ReadableStreamReadResult() noexcept;
    [[nodiscard]] ReadableStreamReadResult clone() const noexcept;
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::Any& value);
    /// Getter of the `done` attribute.
    [[nodiscard]] bool done() const;
    /// Setter of the `done` attribute.
    void done(bool value);
};

} // namespace webbind