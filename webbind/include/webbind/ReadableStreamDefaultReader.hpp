#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStreamReadResult;


class ReadableStreamReadResult : public emlite::Val {
  explicit ReadableStreamReadResult(Handle h) noexcept;
public:
    static ReadableStreamReadResult take_ownership(Handle h) noexcept;
    explicit ReadableStreamReadResult(const emlite::Val &val) noexcept;
    ReadableStreamReadResult() noexcept;
    ReadableStreamReadResult clone() const noexcept;
    jsbind::Any value() const;
    void value(const jsbind::Any& value);
    bool done() const;
    void done(bool value);
};

class ReadableStreamDefaultReader : public emlite::Val {
    explicit ReadableStreamDefaultReader(Handle h) noexcept;

public:
    explicit ReadableStreamDefaultReader(const emlite::Val &val) noexcept;
    static ReadableStreamDefaultReader take_ownership(Handle h) noexcept;

    ReadableStreamDefaultReader clone() const noexcept;
    ReadableStreamDefaultReader(const ReadableStream& stream);
    jsbind::Promise<ReadableStreamReadResult> read();
    jsbind::Undefined releaseLock();
    jsbind::Promise<jsbind::Undefined> closed() const;
    jsbind::Promise<jsbind::Undefined> cancel();
    jsbind::Promise<jsbind::Undefined> cancel(const jsbind::Any& reason);
};

