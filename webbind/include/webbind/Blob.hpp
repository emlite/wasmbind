#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;
class ReadableStream;


class Blob : public emlite::Val {
    explicit Blob(Handle h) noexcept;

public:
    explicit Blob(const emlite::Val &val) noexcept;
    static Blob take_ownership(Handle h) noexcept;

    Blob clone() const noexcept;
    Blob(const jsbind::Sequence<jsbind::Any>& blobParts, const jsbind::Any& options);
    long long size() const;
    jsbind::DOMString type() const;
    Blob slice(long long start, long long end, const jsbind::DOMString& contentType);
    ReadableStream stream();
    jsbind::Promise text();
    jsbind::Promise arrayBuffer();
    jsbind::Promise bytes();
};

