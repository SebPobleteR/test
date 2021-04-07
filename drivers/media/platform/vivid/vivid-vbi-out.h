/*
 * vivid-vbi-out.h - vbi output support functions.
 *
 * Copyright 2014 Cisco Systems, Inc. and/or its affiliates. All rights reserved.
 *
 * This program is free software; you may redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _VIVID_VBI_OUT_H_
#define _VIVID_VBI_OUT_H_

void vivid_sliced_vbi_out_process(struct vivid_dev *dev, struct vivid_buffer *buf);
int vidioc_g_fmt_vbi_out(struct file *file, void *priv,
					struct v4l2_format *f);
int vidioc_s_fmt_vbi_out(struct file *file, void *priv,
					struct v4l2_format *f);
int vidioc_g_fmt_sliced_vbi_out(struct file *file, void *fh, struct v4l2_format *fmt);
int vidioc_try_fmt_sliced_vbi_out(struct file *file, void *fh, struct v4l2_format *fmt);
int vidioc_s_fmt_sliced_vbi_out(struct file *file, void *fh, struct v4l2_format *fmt);

extern const struct vb2_ops vivid_vbi_out_qops;

#endif
