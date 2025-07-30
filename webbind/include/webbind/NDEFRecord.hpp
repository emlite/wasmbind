#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NDEFRecord;


class NDEFRecord : public emlite::Val {
    explicit NDEFRecord(Handle h) noexcept;

public:
    explicit NDEFRecord(const emlite::Val &val) noexcept;
    static NDEFRecord take_ownership(Handle h) noexcept;

    NDEFRecord clone() const noexcept;
    NDEFRecord(const jsbind::Any& recordInit);
    jsbind::String recordType() const;
    jsbind::String mediaType() const;
    jsbind::String id() const;
    jsbind::DataView data() const;
    jsbind::String encoding() const;
    jsbind::String lang() const;
    jsbind::TypedArray<NDEFRecord> toRecords();
};

