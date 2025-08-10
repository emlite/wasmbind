#include <webbind/GPUComputePassTimestampWrites.hpp>
#include <webbind/GPUQuerySet.hpp>

using emlite::Val;
namespace webbind {

GPUComputePassTimestampWrites::GPUComputePassTimestampWrites(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUComputePassTimestampWrites GPUComputePassTimestampWrites::take_ownership(Handle h) noexcept {
        return GPUComputePassTimestampWrites(h);
    }
GPUComputePassTimestampWrites::GPUComputePassTimestampWrites(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUComputePassTimestampWrites::GPUComputePassTimestampWrites() noexcept: emlite::Val(emlite::Val::object()) {}
GPUComputePassTimestampWrites GPUComputePassTimestampWrites::clone() const noexcept { return *this; }

GPUQuerySet GPUComputePassTimestampWrites::querySet() const {
    return emlite::Val::get("querySet").as<GPUQuerySet>();
}

void GPUComputePassTimestampWrites::querySet(const GPUQuerySet& value) {
    emlite::Val::set("querySet", value);
}

jsbind::Any GPUComputePassTimestampWrites::beginningOfPassWriteIndex() const {
    return emlite::Val::get("beginningOfPassWriteIndex").as<jsbind::Any>();
}

void GPUComputePassTimestampWrites::beginningOfPassWriteIndex(const jsbind::Any& value) {
    emlite::Val::set("beginningOfPassWriteIndex", value);
}

jsbind::Any GPUComputePassTimestampWrites::endOfPassWriteIndex() const {
    return emlite::Val::get("endOfPassWriteIndex").as<jsbind::Any>();
}

void GPUComputePassTimestampWrites::endOfPassWriteIndex(const jsbind::Any& value) {
    emlite::Val::set("endOfPassWriteIndex", value);
}


} // namespace webbind