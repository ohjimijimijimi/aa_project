<?php
/**
 * @file
 * aa_project.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function aa_project_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Theatre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0fec79e0-fc68-44cb-a2da-49e64abed665',
    'vocabulary_machine_name' => 'types',
    'field_type_color' => array(
      'und' => array(
        0 => array(
          'value' => '#9557cc',
          'format' => NULL,
          'safe_value' => '#9557cc',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Exhibitions',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '12f1885f-8d0d-4bdd-a132-082bec1bb097',
    'vocabulary_machine_name' => 'types',
    'field_type_color' => array(
      'und' => array(
        0 => array(
          'value' => '#4a8450',
          'format' => NULL,
          'safe_value' => '#4a8450',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Projects',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46916e2a-0b74-40a5-8cd8-8283ffa8dc70',
    'vocabulary_machine_name' => 'types',
    'field_type_color' => array(
      'und' => array(
        0 => array(
          'value' => '#e17218',
          'format' => NULL,
          'safe_value' => '#e17218',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Stylist',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8c7d3c0c-c9e4-4a73-98d8-892cd081b319',
    'vocabulary_machine_name' => 'types',
    'field_type_color' => array(
      'und' => array(
        0 => array(
          'value' => '#000000',
          'format' => NULL,
          'safe_value' => '#000000',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tailored',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cb27e13f-6c72-4d2f-9a9f-2bc1d3d3aaac',
    'vocabulary_machine_name' => 'types',
    'field_type_color' => array(
      'und' => array(
        0 => array(
          'value' => '#000000',
          'format' => NULL,
          'safe_value' => '#000000',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cinema',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e4171b71-de69-48f6-965e-b1370dc9e57c',
    'vocabulary_machine_name' => 'types',
    'field_type_color' => array(
      'und' => array(
        0 => array(
          'value' => '#e60026',
          'format' => NULL,
          'safe_value' => '#e60026',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
