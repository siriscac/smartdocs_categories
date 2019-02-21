<?php
/**
 * @file
 * smartdocs_categories.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function smartdocs_categories_image_default_styles() {
  $styles = array();

  // Exported image style: smartdocs_400x243.
  $styles['smartdocs_400x243'] = array(
    'label' => 'Smartdocs 400x243',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 400,
          'height' => 243,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
