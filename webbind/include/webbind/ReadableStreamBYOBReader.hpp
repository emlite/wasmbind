#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ReadableStreamDefaultReader.hpp"
#include "enums.hpp"

class ReadableStreamBYOBReaderReadOptions;


class ReadableStreamBYOBReaderReadOptions : public emlite::Val {
  explicit ReadableStreamBYOBReaderReadOptions(Handle h) noexcept;
public:
    static ReadableStreamBYOBReaderReadOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamBYOBReaderReadOptions(const emlite::Val &val) noexcept;
    ReadableStreamBYOBReaderReadOptions() noexcept;
    ReadableStreamBYOBReaderReadOptions clone() const noexcept;
    long long min() const;
    void min(long long value);
};

class ReadableStreamBYOBReader : public emlite::Val {
    explicit ReadableStreamBYOBReader(Handle h) noexcept;

public:
    explicit ReadableStreamBYOBReader(const emlite::Val &val) noexcept;
    static ReadableStreamBYOBReader take_ownership(Handle h) noexcept;

    ReadableStreamBYOBReader clone() const noexcept;
    ReadableStreamBYOBReader(const ReadableStream& stream);
    jsbind::Promise read(const jsbind::Any& view);
    jsbind::Promise read(const jsbind::Any& view, const ReadableStreamBYOBReaderReadOptions& options);
    jsbind::Undefined releaseLock();
    jsbind::Promise closed() const;
    jsbind::Promise cancel();
    jsbind::Promise cancel(const jsbind::Any& reason);
};

