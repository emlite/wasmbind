#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WriteParams
/// [`WriteParams`](https://developer.mozilla.org/en-US/docs/Web/API/WriteParams)
class WriteParams : public emlite::Val {
  explicit WriteParams(Handle h) noexcept;
public:
    static WriteParams take_ownership(Handle h) noexcept;
    explicit WriteParams(const emlite::Val &val) noexcept;
    WriteParams() noexcept;
    [[nodiscard]] WriteParams clone() const noexcept;
    [[nodiscard]] WriteCommandType type() const;
    void type(const WriteCommandType& value);
    [[nodiscard]] long long size() const;
    void size(long long value);
    [[nodiscard]] long long position() const;
    void position(long long value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind