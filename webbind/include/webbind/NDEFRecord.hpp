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
    jsbind::USVString recordType() const;
    jsbind::USVString mediaType() const;
    jsbind::USVString id() const;
    jsbind::DataView data() const;
    jsbind::USVString encoding() const;
    jsbind::USVString lang() const;
    jsbind::Sequence<NDEFRecord> toRecords();
};

