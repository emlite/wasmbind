#include <webbind/GPURenderPassTimestampWrites.hpp>
#include <webbind/GPUQuerySet.hpp>

namespace webbind {

GPURenderPassTimestampWrites::GPURenderPassTimestampWrites(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPassTimestampWrites GPURenderPassTimestampWrites::take_ownership(Handle h) noexcept {
    return GPURenderPassTimestampWrites(h);
}

GPURenderPassTimestampWrites::GPURenderPassTimestampWrites(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPURenderPassTimestampWrites::GPURenderPassTimestampWrites() noexcept: emlite::Val(emlite::Val::object()) {}

GPURenderPassTimestampWrites GPURenderPassTimestampWrites::clone() const noexcept { return *this; }

GPUQuerySet GPURenderPassTimestampWrites::querySet() const {
    return emlite::Val::get("querySet").as<GPUQuerySet>();
}

void GPURenderPassTimestampWrites::querySet(const GPUQuerySet& value) {
    emlite::Val::set("querySet", value);
}

jsbind::Any GPURenderPassTimestampWrites::beginningOfPassWriteIndex() const {
    return emlite::Val::get("beginningOfPassWriteIndex").as<jsbind::Any>();
}

void GPURenderPassTimestampWrites::beginningOfPassWriteIndex(const jsbind::Any& value) {
    emlite::Val::set("beginningOfPassWriteIndex", value);
}

jsbind::Any GPURenderPassTimestampWrites::endOfPassWriteIndex() const {
    return emlite::Val::get("endOfPassWriteIndex").as<jsbind::Any>();
}

void GPURenderPassTimestampWrites::endOfPassWriteIndex(const jsbind::Any& value) {
    emlite::Val::set("endOfPassWriteIndex", value);
}


} // namespace webbind